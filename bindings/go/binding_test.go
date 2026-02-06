package tree_sitter_df_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_df "github.com/usagi-coffee/tree-sitter-df/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_df.Language())
	if language == nil {
		t.Errorf("Error loading tree-sitter-df grammar")
	}
}
