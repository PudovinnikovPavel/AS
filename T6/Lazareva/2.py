class Stack:
  def __init__(self):
    self.items =[]
  def isEmpty(self):
    if not self.items:
      return False
    else:
      return True
  def Push(self, x):
    self.items.append(x)
  def Pop(self):
    del self.items[:-1]
  def Top(self):
    print(self.items[-1])
  def Size(self):
    print(len(self.items))

l=Stack()
print(l.isEmpty())
l.Push('vika')
print(l.isEmpty())
l.Top()
l.Size()
