import io.github.treesitter.jtreesitter.Language;
import io.github.treesitter.jtreesitter.df.TreeSitterDf;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertDoesNotThrow;

public class TreeSitterDfTest {
    @Test
    public void testCanLoadLanguage() {
        assertDoesNotThrow(() -> new Language(TreeSitterDf.language()));
    }
}
