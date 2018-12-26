#import <Token.hpp>

string Token::toString() {
    string t_name = ListLexer.tokenNames[this->type];
    return "<'" + this->text + "'," + t_name + ">";
}
