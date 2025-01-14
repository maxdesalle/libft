from django.contrib import admin
from django.urls import path
from game.views import titlescreen, worldmap, battle, moviedex, option, save, load, right_move, left_move, up_move, down_move, title_redirect, world_redirect, save_a, a_select, battle_render, battle_attack, worldmap_return, save_top, save_bottom, moviedex_render

urlpatterns = [
    path('moviedex/prisoners/', moviedex_render),
    path('moviedex/network/', moviedex_render),
    path('moviedex/titanic/', moviedex_render),
    path('moviedex/inception/', moviedex_render),
    path('moviedex/goodfellas/', moviedex_render),
    path('moviedex/se7en/', moviedex_render),
    path('moviedex/interstellar/', moviedex_render),
    path('moviedex/gladiator/', moviedex_render),
    path('moviedex/radhe/', moviedex_render),
    path('moviedex/gigli/', moviedex_render),
    path('moviedex/smolensk/', moviedex_render),
    path('moviedex/glitter/', moviedex_render),
    path('moviedex/cats/', moviedex_render),
    path('moviedex/steel/', moviedex_render),
    path('moviedex/rollerball/', moviedex_render),
    path('moviedex/bloodrayne/', moviedex_render),
    path('moviedex/bratz/', moviedex_render),
    path('moviedex/catwoman/', moviedex_render),
    path('moviedex/feardotcom/', moviedex_render),
    path('moviedex/ikiru/', moviedex_render),
    path('moviedex/dangal/', moviedex_render),
    path('moviedex/1917/', moviedex_render),
    path('moviedex/incendies/', moviedex_render),
    path('moviedex/snatch/', moviedex_render),
    path('moviedex/scarface/', moviedex_render),
    path('moviedex/up/', moviedex_render),
    path('moviedex/heat/', moviedex_render),
    path('moviedex/rashomon/', moviedex_render),
    path('moviedex/yojimbo/', moviedex_render),
    path('moviedex/ran/', moviedex_render),
    path('moviedex/unforgiven/', moviedex_render),
    path('moviedex/casino/', moviedex_render),
    path('moviedex/chinatown/', moviedex_render),
    path('moviedex/klaus/', moviedex_render),
    path('moviedex/fargo/', moviedex_render),
    path('moviedex/warrior/', moviedex_render),
    path('moviedex/room/', moviedex_render),
    path('battle/prisoners/', battle_render),
    path('battle/andhadhun/', battle_render),
    path('battle/network/', battle_render),
    path('battle/logan/', battle_render),
    path('battle/platoon/', battle_render),
    path('battle/rush/', battle_render),
    path('battle/rebecca/', battle_render),
    path('battle/prisoners/', battle_render),
    path('battle/network/', battle_render),
    path('battle/titanic/', battle_render),
    path('battle/inception/', battle_render),
    path('battle/goodfellas/', battle_render),
    path('battle/se7en/', battle_render),
    path('battle/interstellar/', battle_render),
    path('battle/gladiator/', battle_render),
    path('battle/radhe/', battle_render),
    path('battle/gigli/', battle_render),
    path('battle/smolensk/', battle_render),
    path('battle/glitter/', battle_render),
    path('battle/cats/', battle_render),
    path('battle/steel/', battle_render),
    path('battle/rollerball/', battle_render),
    path('battle/bloodrayne/', battle_render),
    path('battle/bratz/', battle_render),
    path('battle/catwoman/', battle_render),
    path('battle/feardotcom/', battle_render),
    path('battle/ikiru/', battle_render),
    path('battle/dangal/', battle_render),
    path('battle/1917/', battle_render),
    path('battle/incendies/', battle_render),
    path('battle/snatch/', battle_render),
    path('battle/scarface/', battle_render),
    path('battle/up/', battle_render),
    path('battle/heat/', battle_render),
    path('battle/rashomon/', battle_render),
    path('battle/yojimbo/', battle_render),
    path('battle/ran/', battle_render),
    path('battle/unforgiven/', battle_render),
    path('battle/casino/', battle_render),
    path('battle/chinatown/', battle_render),
    path('battle/klaus/', battle_render),
    path('battle/fargo/', battle_render),
    path('battle/warrior/', battle_render),
    path('battle/room/', battle_render),
    path('battle/prisoners/', battle_render),
    path('battle/andhadhun/', battle_render),
    path('battle/network/', battle_render),
    path('battle/logan/', battle_render),
    path('battle/platoon/', battle_render),
    path('battle/rush/', battle_render),
    path('battle/rebecca/', battle_render),
    path('battle/prisoners/attack/', battle_attack),
    path('battle/network/attack/', battle_attack),
    path('battle/titanic/attack/', battle_attack),
    path('battle/inception/attack/', battle_attack),
    path('battle/goodfellas/attack/', battle_attack),
    path('battle/se7en/attack/', battle_attack),
    path('battle/interstellar/attack/', battle_attack),
    path('battle/gladiator/attack/', battle_attack),
    path('battle/radhe/attack/', battle_attack),
    path('battle/gigli/attack/', battle_attack),
    path('battle/smolensk/attack/', battle_attack),
    path('battle/glitter/attack/', battle_attack),
    path('battle/cats/attack/', battle_attack),
    path('battle/steel/attack/', battle_attack),
    path('battle/rollerball/attack/', battle_attack),
    path('battle/bloodrayne/attack/', battle_attack),
    path('battle/bratz/attack/', battle_attack),
    path('battle/catwoman/attack/', battle_attack),
    path('battle/feardotcom/attack/', battle_attack),
    path('battle/ikiru/attack/', battle_attack),
    path('battle/dangal/attack/', battle_attack),
    path('battle/1917/attack/', battle_attack),
    path('battle/incendies/attack/', battle_attack),
    path('battle/snatch/attack/', battle_attack),
    path('battle/scarface/attack/', battle_attack),
    path('battle/up/attack/', battle_attack),
    path('battle/heat/attack/', battle_attack),
    path('battle/rashomon/attack/', battle_attack),
    path('battle/yojimbo/attack/', battle_attack),
    path('battle/ran/attack/', battle_attack),
    path('battle/unforgiven/attack/', battle_attack),
    path('battle/casino/attack/', battle_attack),
    path('battle/chinatown/attack/', battle_attack),
    path('battle/klaus/attack/', battle_attack),
    path('battle/fargo/attack/', battle_attack),
    path('battle/warrior/attack/', battle_attack),
    path('battle/room/attack/', battle_attack),
    path('battle/prisoners/attack/', battle_attack),
    path('battle/andhadhun/attack/', battle_attack),
    path('battle/network/attack/', battle_attack),
    path('battle/logan/attack/', battle_attack),
    path('battle/platoon/attack/', battle_attack),
    path('battle/rush/attack/', battle_attack),
    path('battle/rebecca/attack/', battle_attack),
    path('admin/', admin.site.urls),
    path('', titlescreen),
    path('worldmap/', worldmap),
    path('battle/', battle, name='home'),
    path('moviedex/', moviedex_render),
    path('options/', option),
    path('options/save_game/', save),
    path('options/save_game/top/', save_top),
    path('options/save_game/bottom/', save_bottom),
    path('options/save_game/save_a/', save_a),
    path('options/titlescreen/', title_redirect),
    path('options/start/', world_redirect),
    path('options/load_game/', load),
    path('worldmap/right_move/', right_move),
    path('worldmap/left_move/', left_move),
    path('worldmap/up_move/', up_move),
    path('worldmap/down_move/', down_move),
    path('worldmap/return/', worldmap_return),
]
