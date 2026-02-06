import XCTest
import SwiftTreeSitter
import TreeSitterDf

final class TreeSitterDfTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_df())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading tree-sitter-df grammar")
    }
}
