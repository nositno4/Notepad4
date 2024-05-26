#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_Markdown = {{
//++Autogenerated -- start of section automatically generated
"address article aside base basefont blockquote body caption center col colgroup dd details dialog dir div dl dt "
"fieldset figcaption figure footer form frame frameset h1 h2 h3 h4 h5 h6 head header hr html iframe legend li link "
"main menu menuitem nav noframes ol optgroup option p param pre script search section style summary "
"table tbody td textarea tfoot th thead title tr track ul "

, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_Markdown[] = {
	EDITSTYLE_DEFAULT,
	{ MULTI_STYLE(SCE_MARKDOWN_HEADER1, SCE_MARKDOWN_SETEXT_H1, 0, 0), NP2StyleX_Header1, L"bold; fore:#0080FF" },
	{ MULTI_STYLE(SCE_MARKDOWN_HEADER2, SCE_MARKDOWN_SETEXT_H2, 0, 0), NP2StyleX_Header2, L"bold; fore:#0066CC" },
	{ SCE_MARKDOWN_HEADER3, NP2StyleX_Header3, L"bold; fore:#0080C0" },
	{ SCE_MARKDOWN_HEADER4, NP2StyleX_Header4, L"bold; fore:#007F7F" },
	{ SCE_MARKDOWN_HEADER5, NP2StyleX_Header5, L"bold; fore:#408080" },
	{ SCE_MARKDOWN_HEADER6, NP2StyleX_Header6, L"bold; fore:#408040" },
	{ MULTI_STYLE(SCE_MARKDOWN_METADATA_YAML, SCE_MARKDOWN_METADATA_TOML, SCE_MARKDOWN_METADATA_JSON, SCE_MARKDOWN_TITLE_BLOCK), NP2StyleX_Metadata, L"fore:#F08000" },
	{ SCE_MARKDOWN_HRULE, NP2StyleX_HorizontalRule, L"bold; back:#FFC040; eolfilled" },
	{ MULTI_STYLE(SCE_MARKDOWN_BLOCKQUOTE, SCE_MARKDOWN_MULTI_BLOCKQUOTE, 0, 0), NP2StyleX_BlockQuote, L"fore:#A46000; back:#FFFFC0; eolfilled" },
	{ MULTI_STYLE(SCE_MARKDOWN_ORDERED_LIST, SCE_MARKDOWN_EXT_ORDERED_LIST, 0, 0), NP2StyleX_OrderedList, L"bold; fore:#0080FF" },
	{ SCE_MARKDOWN_BULLET_LIST, NP2StyleX_UnorderedList, L"bold; fore:#0080FF" },
	{ SCE_MARKDOWN_DEFINITION_LIST, NP2StyleX_DefinitionList, L"bold; fore:#0080FF" },
	{ SCE_MARKDOWN_TASK_LIST, NP2StyleX_TaskList, L"bold; fore:#408040" },
	{ SCE_MARKDOWN_EXAMPLE_LIST, NP2StyleX_ExampleList, L"bold; fore:#408040" },
	{ MULTI_STYLE(SCE_MARKDOWN_INDENTED_BLOCK, SCE_MARKDOWN_BACKTICK_BLOCK, SCE_MARKDOWN_TILDE_BLOCK, 0), NP2StyleX_CodeBlock, L"back:#C5C5C5; eolfilled" },
	{ SCE_MARKDOWN_CODE_SPAN, NP2StyleX_InlineCode, L"back:#C5C5C5" },
	{ MULTI_STYLE(SCE_MARKDOWN_DISPLAY_MATH, SCE_MARKDOWN_BACKTICK_MATH, SCE_MARKDOWN_TILDE_MATH, 0), NP2StyleX_DisplayMath, L"back:#C5C5C5; eolfilled" },
	{ MULTI_STYLE(SCE_MARKDOWN_INLINE_MATH, SCE_MARKDOWN_INLINE_DISPLAY_MATH, SCE_MARKDOWN_MATH_SPAN, 0), NP2StyleX_InlineMath, L"back:#C5C5C5" },
	{ MULTI_STYLE(SCE_MARKDOWN_LINK_TEXT, SCE_MARKDOWN_LINK_TITLE_SQ, SCE_MARKDOWN_LINK_TITLE_DQ, SCE_MARKDOWN_LINK_TITLE_PAREN), NP2StyleX_LinkText, L"fore:#3A6EA5" },
	{ MULTI_STYLE(SCE_MARKDOWN_EM_ASTERISK, SCE_MARKDOWN_EM_UNDERSCORE, 0, 0), NP2StyleX_Emphasis, L"italic" },
	{ MULTI_STYLE(SCE_MARKDOWN_STRONG_ASTERISK, SCE_MARKDOWN_STRONG_UNDERSCORE, 0, 0), NP2StyleX_Strong, L"bold" },
	{ SCE_MARKDOWN_STRIKEOUT, NP2StyleX_Strikethrough, L"strike" },
	{ MULTI_STYLE(SCE_MARKDOWN_SUPERSCRIPT, SCE_MARKDOWN_SHORT_SUPERSCRIPT, 0, 0), NP2StyleX_Superscript, L"overline" },
	{ MULTI_STYLE(SCE_MARKDOWN_SUBSCRIPT, SCE_MARKDOWN_SHORT_SUBSCRIPT, 0, 0), NP2StyleX_Subscript, L"underline" },
	{ SCE_MARKDOWN_CITATION_AT, NP2StyleX_Citation, L"fore:#408040" },
	{ SCE_MARKDOWN_DELIMITER_ROW, NP2StyleX_DelimiterRow, L"bold; back:#FFC040; eolfilled" },
	{ SCE_MARKDOWN_DELIMITER, NP2StyleX_Delimiter, L"bold; fore:#0080C0" },
	{ SCE_MARKDOWN_EMOJI, NP2StyleX_Emoji, L"fore:#FF8000" },
	{ SCE_MARKDOWN_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ MULTI_STYLE(SCE_MARKDOWN_DIFF_ADD_CURLY, SCE_MARKDOWN_DIFF_ADD_SQUARE, 0, 0), NP2StyleX_LineAddition, L"back:#80FF80" },
	{ MULTI_STYLE(SCE_MARKDOWN_DIFF_DEL_CURLY, SCE_MARKDOWN_DIFF_DEL_SQUARE, 0, 0), NP2StyleX_LineRemoval, L"back:#FF8080" },
};

EDITLEXER lexMarkdown = {
	SCLEX_MARKDOWN, NP2LEX_MARKDOWN,
//Settings++Autogenerated -- start of section automatically generated
		LexerAttr_NoLineComment |
		LexerAttr_EscapePunctuation,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 0) | (1 << 1) | (1 << 2), // header1, header2, header3
		0,
		'\\', SCE_MARKDOWN_ESCAPECHAR, 0,
		0,
		0, 0,
		0, 0
		, KeywordAttr32(0, KeywordAttr_PreSorted | KeywordAttr_NoAutoComp) // html block tag
		, 0,
		0, 0,
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"Markdown", Styles_Markdown),
	L"md; markdown; mdown; mkdn; mkd; litcoffee; rmd",
	&Keywords_Markdown,
	Styles_Markdown
};
