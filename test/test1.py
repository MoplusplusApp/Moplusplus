import matplotlib.pyplot as plt
from matplotlib.widgets import Slider, Button
import math
fig, ax = plt.subplots()

x1 = [1,2,3]
y1 = [2,4,1]

def btX(t):
    global x1
    return (1-t)*((1-t)*x1[0]+t*x1[1])+t*((1-t)*x1[1]+t*x1[2])


def btY(t):
    global y1
    return (1-t)*((1-t)*y1[0]+t*y1[1])+t*((1-t)*y1[1]+t*y1[2])
    
ax.plot(x1, y1, label = "curve points")
accuracy=35
x2=[]
y2=[]
for i in range(accuracy):
    x2.append(btX(i*(1/(accuracy-1))))
    y2.append(btY(i*(1/(accuracy-1))))
ax.plot(x2, y2, label = "curve with Accuracy points")
plt.subplots_adjust(left=0.25, bottom=0.25)

axfreq = plt.axes([0.25, 0.1, 0.65, 0.03], facecolor='red')
freq_slider = Slider(
    ax=axfreq,
    label='Frequency [Hz]',
    valmin=2,
    valmax=30,
    valinit=accuracy,
)

def calculatePathLength(x, y):
    length=0
    for i in range(len(x)-1):
        length+=math.sqrt(((x[i]-x[i+1])**2+(y[i]-y[i+1])**2))
    return length
def update(val):
    ax.cla()
    accuracy=int(freq_slider.val)
    x2=[]
    y2=[]
    ax.plot(x1, y1)
    for i in range(accuracy):
        x2.append(btX(i*(1/(accuracy-1))))
        y2.append(btY(i*(1/(accuracy-1))))
    ax.text(2,2, calculatePathLength(x2,y2))
    ax.plot(x2, y2)
freq_slider.on_changed(update)

plt.legend()
  
plt.show()
