from re import S
import matplotlib.pyplot as plt
import numpy as np

plt.style.use("_mpl-gallery-nogrid")

# make data
x = np.arange(-4, 4, 0.4)
y = np.arange(-4, 4, 0.4)
X, Y = np.meshgrid(x, y)
U = np.sqrt(((1 / (X ** 2 + Y ** 2))) * (abs(X) / np.sqrt(X ** 2 + Y ** 2)))
V = np.sqrt(((1 / (X ** 2 + Y ** 2))) * (abs(Y) / np.sqrt(X ** 2 + Y ** 2)))

# plot
fig, ax = plt.subplots()

ax.quiver(X, Y, U, V, color="C0", scale_units="xy", scale=5, width=0.001)
ax.set(xlim=(-5, 5), ylim=(-5, 5))

plt.show()
