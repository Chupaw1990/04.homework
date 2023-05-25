#pragma once
#include "astnode.hpp"

class Mul : public ASTNode {
  public:
    Mul(ASTNode* left, ASTNode* right)
        : ASTNode("*",left, right){}
};
