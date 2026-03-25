file_name = 'me.jpg'

ext = file_name.split('.')[-1]

supported = ('jpg', 'png', 'gif')

if ext in supported:
  print('cool')

