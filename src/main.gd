extends Control

@onready var  timeline:HSlider = $VBox/Timeline
@onready var  texture: TextureRect = $VBox/PanelContainer/TextureRect

var is_playing: bool  = false

func  _ready()-> void:
	pass
	
func _process(a_delta: float) -> void:
	pass

func _on_play_pause_button_pressed():
	
	is_playing = !is_playing
	if is_playing:
		pass
	else:
		pass

