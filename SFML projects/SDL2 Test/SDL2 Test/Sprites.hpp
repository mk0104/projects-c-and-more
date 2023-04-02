

void myfucntion(string FrinFile, sf::Texture Texture, sf::Sprite Sprite) {


if (!Texture.loadFromFile(FrinFile)) {
    cout << "character sprite fail to load";
}
Sprite.setTexture(Texture);

}