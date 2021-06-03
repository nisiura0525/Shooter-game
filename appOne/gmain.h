#pragma once
void loading(struct DATA* d);
void title(struct DATA* d);
void init(struct DATA* d);
void play(struct DATA* d);
int collision(struct CHARA* c, struct BULLET* b);
void draw(struct DATA* d);
void hpGauge(struct CHARA* c);
void result(struct DATA* d);