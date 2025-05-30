# import pandas as pd 
# import matplotlib.pyplot as plt
# df = pd.read_csv('Book1.csv')
# df.plot(kind="scatter", x="Duration",y="Calories")
# plt.show()  
# import matplotlib
# print(matplotlib.__version__)

# import matplotlib.pyplot as plt
# import numpy as np
# x = np.array([0,6])
# y = np.array([0,250])
# plt.plot(x,y)
# plt.show()

# ypoints = np.array([5,6,2,12,6,13,5])
# plt.plot(ypoints)
# plt.show()

# import matplotlib.pyplot as plt
# import numpy as np
# ypoints = np.array([5,6,2,12,6,13,5])
# plt.plot(ypoints,marker = '*')
# plt.show()

# import matplotlib.pyplot as plt
# import numpy as np
# ypoints = np.array([5,6,2,12,6,13,5])
# plt.plot(ypoints,'o:r',ms=10) # ms - marker size
# plt.show()

# import matplotlib.pyplot as plt
# import numpy as np
# ypoints = np.array([5,6,2,12,6,13,5])
# plt.plot(ypoints,'o:r',ms=10,mec='y')# marker outline
# plt.show()
# import matplotlib.pyplot as plt
# import numpy as np
# ypoints = np.array([5,6,2,12,6,13,5])
# plt.plot(ypoints,'o:r',ms=10,mfc='y) # mfc - marker face color
# plt.show()

# import matplotlib.pyplot as plt
# import numpy as np
# ypoints = np.array([5,6,2,12,6,13,5])
# plt.plot(ypoints,'o:r',ms=10,mfc='y',linewidth='10.5') # line width
# plt.show()

# import matplotlib.pyplot as plt
# import numpy as np
# y1 = np.array([5,6,2,12,6,13,5])
# y2 = np.array([4,6,2,5,1,12,5])
# plt.title("Sports watch Data")
# plt.xlabel("Average")
# plt.ylabel("Calories")
# plt.plot(y1) # line width
# plt.plot(y2) # line width
# plt.grid(axis='x',color='r',linestyle = '--',linewidth='0.5')
# plt.grid(axis='y')
# plt.show()

# import matplotlib.pyplot as plt
# import numpy as np
# y1 = np.array([5,6,2,12,6,13,5])
# y2 = np.array([4,6,2,5,1,12,5])
# plt.bar(y1,y2)
# plt.show()

# import matplotlib.pyplot as plt
# import numpy as np
# myl = ["Apple","Banana","Mango"]
# y = [350,400,200]
# plt.pie(y,labels=myl)
# plt.show()

# import matplotlib.pyplot as plt
# import numpy as np
# myl = ["Apple","Banana","Mango"]
# y = [350,400,200]
# plt.pie(y,labels=myl)
# plt.legend()
# plt.show()

# import matplotlib.pyplot as plt
# import numpy as np
# x = np.random.normal(150,175,255)
# plt.hist(x)
# plt.show()

# import pandas as pd
# df = pd.read_csv("Book1.csv")
# print(df.head(10))

import matplotlib.pyplot as plt
import numpy as np
x = np.array([0,2,5,3,6])
y = np.array([4,1,4,10,5])
plt.subplot(1,2,1)
plt.plot(x,y)

x = np.array([2,6,3,7,10])
y = np.array([4,2,1,5,3])
plt.subplot(1,2,2)
plt.plot(x,y)

plt.show()