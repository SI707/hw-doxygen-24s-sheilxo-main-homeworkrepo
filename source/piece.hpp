/**
 * @file piece.hpp
 * @author Rufus Bobcat
 * @course cs3560
 *
 * This file is part of the given source code for a project in cs2401.
 * It defines the `piece` class which represents a single piece in a board game.
 *
 * @see game.hpp
 */

#pragma once

/** Represents the color state of a game piece. */
enum color { black, white, blank };

/**
 * @class piece
 * @brief Represents a single piece in a board game with two sides, black and white.
 *
 * This class is used to store the state of a piece and flip its color.
 */
class piece {
public:
    /**
     * @brief Construct a new piece object with the color set to `blank`.
     */
    piece() : theColor(blank) {}

    /**
     * @brief Flips the color of the piece; white to black or black to white.
     */
    void flip() {
        if (theColor == white) {
            theColor = black;
        } else if (theColor == black) {
            theColor = white;
        }
    }

    /**
     * @brief Checks if the piece is blank.
     * @return true if the piece is blank, false otherwise.
     */
    bool is_blank() const { return theColor == blank; }

    /**
     * @brief Checks if the piece is black.
     * @return true if the piece is black, false otherwise.
     */
    bool is_black() const { return theColor == black; }

    /**
     * @brief Checks if the piece is white.
     * @return true if the piece is white, false otherwise.
     */
    bool is_white() const { return theColor == white; }

    /**
     * @brief Sets the color of the piece to white.
     */
    void set_white() { theColor = white; }

    /**
     * @brief Sets the color of the piece to black.
     */
    void set_black() { theColor = black; }

private:
    color theColor; ///< The current color of the piece.
};
