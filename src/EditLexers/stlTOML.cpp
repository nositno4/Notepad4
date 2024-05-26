#include "EditLexer.h"
#include "EditStyleX.h"

// https://toml.io/
// TOML 1.0 https://github.com/toml-lang/toml

static KEYWORDLIST Keywords_TOML = {{
//++Autogenerated -- start of section automatically generated
"false inf nan true "

, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_TOML[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_TOML_KEYWORD, NP2StyleX_Keyword, L"fore:#0000FF" },
	{ SCE_TOML_TABLE, NP2StyleX_Table, L"bold; back:#FFC040; eolfilled" },
	{ SCE_TOML_KEY, NP2StyleX_Key, L"fore:#A46000" },
	{ SCE_TOML_COMMENT, NP2StyleX_Comment, L"fore:#608060" },
	{ MULTI_STYLE(SCE_TOML_STRING_SQ, SCE_TOML_STRING_DQ, 0, 0), NP2StyleX_String, L"fore:#008000" },
	{ MULTI_STYLE(SCE_TOML_TRIPLE_STRING_SQ, SCE_TOML_TRIPLE_STRING_DQ, 0, 0), NP2StyleX_TripleQuotedString, L"fore:#F08000" },
	{ SCE_TOML_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_TOML_DATETIME, NP2StyleX_DateTime, L"fore:#008080" },
	{ SCE_TOML_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ SCE_TOML_OPERATOR, NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexTOML = {
	SCLEX_TOML, NP2LEX_TOML,
//Settings++Autogenerated -- start of section automatically generated
		LexerAttr_TabAsSpaces |
		LexerAttr_NoGlobalTabSettings |
		LexerAttr_NoBlockComment,
		TAB_WIDTH_2, INDENT_WIDTH_2,
		(1 << 0) | (1 << 1), // table, comment
		0,
		'\\', SCE_TOML_ESCAPECHAR, 0,
		0,
		0, 0,
		SCE_TOML_OPERATOR, 0
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		, SCE_TOML_COMMENT,
		SCE_TOML_STRING_SQ, SCE_TOML_ESCAPECHAR,
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"TOML File", Styles_TOML),
	L"toml; pylintrc",
	&Keywords_TOML,
	Styles_TOML
};
