#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_VIM = {{
//++Autogenerated -- start of section automatically generated
"END au autocmd break call catch const continue def delfun delfunction "
"else elseif end enddef endf endfor endfun endfunc endfunction endif endtry endw endwhile export "
"false final finally for fun func function if import in is isnot let lockvar null return throw true try unlet unlockvar "
"var while "

, // 1 commands
"ascii aug augroup do doautoall doautocmd echo echoe echoerr echoh echohl echom echomsg echon exe exec execute "
"filter finish map noautocmd normal print redir set setf setfiletype setg setglobal setl setlocal silent syn syntax "
"unmap unsilent verbose version vim9 vim9cmd vim9script "

, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_VIM[] = {
	EDITSTYLE_DEFAULT,
	{ MULTI_STYLE(SCE_VIM_WORD, SCE_VIM_WORD_DEMOTED, 0, 0), NP2StyleX_Keyword, L"fore:#FF8000" },
	{ SCE_VIM_COMMANDS, NP2StyleX_Command, L"fore:#FF8000" },
	{ SCE_VIM_FUNCTION, NP2StyleX_Function, L"fore:#A46000" },
	{ SCE_VIM_COMMENTLINE, NP2StyleX_Comment, L"fore:#608060" },
	{ MULTI_STYLE(SCE_VIM_STRING_DQ, SCE_VIM_STRING_SQ, 0, 0), NP2StyleX_String, L"fore:#008000" },
	//{ SCE_VIM_HEREDOC, NP2StyleX_HeredocString, L"fore:#648000" },
	{ SCE_VIM_BLOB_HEX, NP2StyleX_HexString, L"fore:#C08000" },
	{ SCE_VIM_REGEX, NP2StyleX_Regex, L"fore:#006633; back:#FFF1A8" },
	{ SCE_VIM_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_VIM_ENV_VARIABLE, NP2StyleX_Variable, L"fore:#9E4D2A" },
	{ SCE_VIM_REGISTER, NP2StyleX_Register, L"fore:#808000" },
	{ SCE_VIM_OPTION, NP2StyleX_Option, L"fore:#0C71C3" },
	{ SCE_VIM_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ SCE_VIM_OPERATOR, NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexVim = {
	SCLEX_VIM, NP2LEX_VIM,
//Settings++Autogenerated -- start of section automatically generated
		LexerAttr_NoBlockComment,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 0) | (1 << 1), // level1, level2
		0,
		'\\', SCE_YAML_ESCAPECHAR, 0,
		0,
		0, 0,
		SCE_VIM_OPERATOR, 0
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_PreSorted) // commands
		, SCE_VIM_TASKMARKER,
		SCE_VIM_STRING_DQ, SCE_VIM_REGEX,
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"Vim Script", Styles_VIM),
	L"vim",
	&Keywords_VIM,
	Styles_VIM
};
