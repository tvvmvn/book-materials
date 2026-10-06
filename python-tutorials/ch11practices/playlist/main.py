class Playlist:
  def __init__(self, name):
    self.name = name
    self.songs = []

  def add_song(self, song):
    self.songs.append(song)

  def remove_song(self, num):
    if (0 < num <= len(self.songs)):
      self.songs.pop(num - 1)

  def show_list(self):
    print(self.name)
    for i, song in enumerate(self.songs):
      print(f"{i + 1}. {song}")

my_playlist = Playlist("내가 좋아하는 옛날 노래")
my_playlist.add_song("Moon River")
my_playlist.add_song("Fly me to the moon")
my_playlist.add_song("Raindrops keep falling on my head")
my_playlist.remove_song(2)
my_playlist.show_list()

# 
# 내가 좋아하는 옛날 노래
# 1. Moon River
# 2. Raindrops keep falling on my head