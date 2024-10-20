import XCTest
import SwiftTreeSitter
import TreeSitterJan

final class TreeSitterJanTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_jan())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Jan grammar")
    }
}
