#pragma once

#include <string>

#include "astnode.hpp"

class Variable : public ASTNode {
  public:
    Variable(const std::string& val)
        : ASTNode(val){}

    std::string value() const { return val_; }

  private:
    std::string val_;
};