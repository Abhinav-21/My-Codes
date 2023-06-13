import pygame
import random

pygame.init()
WINDOW_WIDTH = 600
WINDOW_HEIGHT = 150

window = pygame.display.set_mode((WINDOW_WIDTH, WINDOW_HEIGHT))
pygame.display.set_caption("T-Rex Game")

clock = pygame.time.Clock()
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
GREEN = (0, 255, 0)
RED = (255, 0, 0)


class Trex(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.image = pygame.Surface((20, 30))
        self.image.fill(GREEN)
        self.rect = self.image.get_rect()
        self.rect.x = 50
        self.rect.y = WINDOW_HEIGHT - self.rect.height - 20
        self.velocity = 0
        self.jump_speed = 10
        self.gravity = 0.5

    def update(self):
        self.velocity += self.gravity
        self.rect.y += self.velocity

        if self.rect.bottom >= WINDOW_HEIGHT - 20:
            self.rect.bottom = WINDOW_HEIGHT - 20
            self.velocity = 0

    def jump(self):
        if self.rect.bottom == WINDOW_HEIGHT - 20:
            self.velocity -= self.jump_speed


class Cactus(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.image = pygame.Surface((20, 40))
        self.image.fill(RED)
        self.rect = self.image.get_rect()
        self.rect.x = WINDOW_WIDTH
        self.rect.y = WINDOW_HEIGHT - self.rect.height - 20
        self.speed = 5

    def update(self):
        self.rect.x -= self.speed


def create_cactus():
    cactus = Cactus()
    all_sprites.add(cactus)
    cacti.add(cactus)


all_sprites = pygame.sprite.Group()
trex = Trex()
all_sprites.add(trex)
cacti = pygame.sprite.Group()
next_cactus_time = 0
cactus_interval = 2000
running = True
while running:
    clock.tick(60)
    # Handle events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:
                trex.jump()
    # Update game objects
    all_sprites.update()
    # Generate cacti
    now = pygame.time.get_ticks()
    if now > next_cactus_time:
        create_cactus()
        next_cactus_time = now + cactus_interval + random.randint(-500, 500)
    # Check for collisions
    if pygame.sprite.spritecollide(trex, cacti, False):
        running = False
    # Draw the screen
    window.fill(WHITE)
    all_sprites.draw(window)
    pygame.display.flip()
