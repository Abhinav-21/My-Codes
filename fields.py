import matplotlib.pyplot as plt
import numpy as np

x, y, z = np.meshgrid(
    np.arange(-2, 2, 0.25), np.arange(-2, 2, 0.25), np.arange(-2, 2, 0.25)
)
a = x * np.exp(-(x ** 2) - y ** 2 - z ** 2)
v, u, w = np.gradient(z, 0.2, 0.2, 0.2)
fig, ax = plt.subplots()
q = ax.quiver(x, y, z, u, v, w)
plt.show()
