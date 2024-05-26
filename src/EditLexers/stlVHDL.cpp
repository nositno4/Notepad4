#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_VHDL = {{
//++Autogenerated -- start of section automatically generated
"abs access after alias all and array assert assume assume_guarantee attribute begin body buffer bus constant cover "
"default disconnect downto else elsif ertial exit fairness file force generate generic group guarded "
"impure in inertial inout is label library linkage literal lkage map mod nand new next nor not null "
"of on open or others out parameter port postponed private property pure "
"range register reject release rem report restrict restrict_guarantee return rol ror "
"select sequence severity shared signal sla sll sra srl strong subtype then to transport type unaffected until use "
"variable vmode vpkg vprop vunit wait while with xnor xor "

, // 1 code folding
"architecture block case component configuration context end entity for function if loop "
"package procedure process protected record units view when "

, // 2 types
"bit bit_vector boolean boolean_vector "
"call_path_element call_path_vector call_path_vector_ptr character complex complex_polar "
"dayofweek delay_length dir_create_status dir_delete_status dir_open_status direction directory directory_items "
"file_delete_status file_open_kind file_open_state file_open_status file_origin_kind "
"fixed_overflow_style_type fixed_round_style_type float float128 float32 float64 "
"integer integer_vector line line_vector natural positive positive_real principal_value real real_vector round_type "
"severity_level sfixed side signed std_logic std_logic_vector std_ulogic std_ulogic_vector string "
"text time time_record time_vector "
"u_float u_float128 u_float32 u_float64 u_sfixed u_signed u_ufixed u_unsigned ufixed "
"unresolved_float unresolved_float128 unresolved_float32 unresolved_float64 unresolved_sfixed unresolved_signed "
"unresolved_ufixed unresolved_unsigned unsigned ux01 ux01z "
"valid_fpstate width x01 x01z "

, // 3 directives
"else elsif end error if protect warning "

, // 4 attributes
"ACTIVE ASCENDING BASE CONVERSE DELAYED DESIGNATED_SUBTYPE DRIVING DRIVING_VALUE ELEMENT EVENT FOREIGN HIGH "
"IMAGE IMAGE( INDEX INSTANCE_NAME LAST_ACTIVE LAST_EVENT LAST_VALUE LEFT LEFTOF LEFTOF( LENGTH LOW "
"PATH_NAME POS POS( PRED PRED( QUIET RANGE RECORD REFLECT REVERSE_RANGE RIGHT RIGHTOF RIGHTOF( "
"SIGNAL SIMPLE_NAME STABLE SUBTYPE SUCC SUCC( TRANSACTION VAL( VALUE VALUE( active ascending base converse "
"delayed designated_subtype driving driving_value element event foreign high image image( index instance_name "
"last_active last_event last_value left leftof leftof( length low path_name pos pos( pred pred( quiet "
"range record reflect reverse_range right rightof rightof( signal simple_name stable subtype succ succ( transaction "
"val( value value( "

, // 5 functions
"add( add_carry( arccos( arccosh( arcsin( arcsinh( arctan( arctanh( arg( "
"binary_read binary_write bitstoreal( bread break_number( bwrite "
"cbrt( ceil( classfp( cmplx( complex_to_polar( conj( copysign( cos( cosh( "
"deallocate( dir_close( dir_createdir( dir_deletedir( dir_deletefile( dir_itemexists( dir_itemisdir( dir_itemisfile( "
"dir_open( dir_workingdir( divide( dividebyp2( "
"endfile( epoch epoch( eq( exp( "
"falling_edge( file_close( file_line file_mode( file_name file_open( file_path file_rewind( file_seek( file_size( "
"file_tell( file_truncate( find_leftmost( find_rightmost( finish finish( finite( floor( flush( "
"from_binary_string from_bstring from_hex_string from_hstring( from_octal_string from_ostring( from_string( "
"ge( get_call_path get_principal_value( getenv( gmtime gmtime( gt( hex_read hex_write hread( hwrite( "
"is_negative( is_x( isnan( justify( le( localtime localtime( log( log10( log2( logb( lt( "
"mac( maximum( minimum( modulo( multiply( nanfp( ne( neg_inffp( neg_zerofp( nextafter( normalize( now "
"octal_read octal_write oread( owrite( polar_to_complex( pos_inffp( qnanfp( "
"read( readline( realmax( realmin( realtobits( reciprocal( remainder( resize( resolution_limit resolved( rising_edge( "
"rotate_left( rotate_right( round( "
"saturate( scalb( seconds_to_time( sfix_high( sfix_low( sfixed_high( sfixed_low( shift_left( shift_right( "
"sign( sin( sinh( sqrt( sread( std_match( stop stop( string_read string_write subtract( swrite "
"tan( tanh( tee( time_to_seconds( to_01( to_binary_string to_bit( to_bit_vector to_bitvector( to_bstring to_bv "
"to_float( to_float128( to_float32( to_float64( to_hex_string to_hstring( to_integer( to_octal_string to_ostring( "
"to_real( to_sfix( to_sfixed( to_signed( to_slv "
"to_std_logic_vector to_std_ulogic_vector to_stdlogicvector( to_stdulogic( to_stdulogicvector( to_string( to_sulv "
"to_ufix( to_ufixed( to_unsigned( to_ux01( to_x01( to_x01z( tool_edition tool_name tool_type tool_vendor tool_version "
"trunc( "
"ufix_high( ufix_low( ufixed_high( ufixed_low( uniform( unordered( vhdl_version write( writeline( zerofp( "

, // 6 constants
"append_mode ascending descending dir_separator error "
"failure false "
"file_origin_begin file_origin_current file_origin_end fixed_round fixed_saturate fixed_truncate fixed_wrap "
"fphdlsynth_or_real friday "
"input isx left left_index "
"math_1_over_e math_1_over_pi math_1_over_sqrt_2 math_2_pi math_3_pi_over_2 math_cbase_1 math_cbase_j math_czero "
"math_deg_to_rad math_e math_log10_of_e math_log2_of_e math_log_of_10 math_log_of_2 "
"math_pi math_pi_over_2 math_pi_over_3 math_pi_over_4 math_rad_to_deg math_sqrt_2 math_sqrt_pi mode_error monday "
"name_error nan neg_denormal neg_inf neg_normal neg_zero note open_ok output pos_denormal pos_inf pos_normal pos_zero "
"quiet_nan read_mode read_write_mode resolved right right_index round_inf round_nearest round_neginf round_zero "
"saturday state_closed state_open status_access_denied status_error status_item_exists "
"status_no_directory status_no_file status_not_empty status_not_found status_ok sunday "
"thursday true tuesday warning wednesday write_mode "

, // 7 packages
"env fixed_float_types fixed_generic_pkg fixed_pkg float_generic_pkg float_pkg ieee math_complex math_real "
"numeric_bit numeric_bit_unsigned numeric_std reflection standard std std_logic_1164 std_logic_textio textio work "

, // 8 misc
"APPEND_MODE ARCCOS( ARCCOSH( ARCSIN( ARCSINH( ARCTAN( ARCTANH( ARG( ASCENDING "
"BINARY_READ BINARY_WRITE BIT BIT_VECTOR BOOLEAN BOOLEAN_VECTOR BREAD BWRITE "
"CALL_PATH_ELEMENT CALL_PATH_VECTOR CALL_PATH_VECTOR_PTR CBRT( CEIL( CHARACTER CMPLX( "
"COMPLEX COMPLEX_POLAR COMPLEX_TO_POLAR( CONJ( COS( COSH( Classfp( Copysign( "
"DAYOFWEEK DEALLOCATE( DELAY_LENGTH DESCENDING DIRECTION DIRECTORY DIRECTORY_ITEMS "
"DIR_CLOSE( DIR_CREATEDIR( DIR_CREATE_STATUS DIR_DELETEDIR( DIR_DELETEFILE( DIR_DELETE_STATUS "
"DIR_ITEMEXISTS( DIR_ITEMISDIR( DIR_ITEMISFILE( DIR_OPEN( DIR_OPEN_STATUS DIR_SEPARATOR DIR_WORKINGDIR( "
"ENDFILE( ENV EPOCH EPOCH( ERROR EXP( "
"FAILURE FALLING_EDGE( FALSE FILE_CLOSE( FILE_DELETE_STATUS FILE_LINE FILE_MODE( FILE_NAME "
"FILE_OPEN( FILE_OPEN_KIND FILE_OPEN_STATE FILE_OPEN_STATUS "
"FILE_ORIGIN_BEGIN FILE_ORIGIN_CURRENT FILE_ORIGIN_END FILE_ORIGIN_KIND FILE_PATH FILE_REWIND( FILE_SEEK( FILE_SIZE( "
"FILE_TELL( FILE_TRUNCATE( FINISH FINISH( FLOOR( FLUSH( FRIDAY Finite( "
"GETENV( GET_CALL_PATH GET_PRINCIPAL_VALUE( GMTIME GMTIME( HEX_READ HEX_WRITE HREAD( HWRITE( "
"IEEE_BIT_CONTEXT IEEE_STD_CONTEXT INPUT INTEGER INTEGER_VECTOR Is_Negative( Is_X( Isnan( JUSTIFY( "
"LEFT LINE LINE_VECTOR LOCALTIME LOCALTIME( LOG( LOG10( LOG2( Logb( "
"MATH_1_OVER_E MATH_1_OVER_PI MATH_1_OVER_SQRT_2 MATH_2_PI MATH_3_PI_OVER_2 "
"MATH_CBASE_1 MATH_CBASE_J MATH_COMPLEX MATH_CZERO MATH_DEG_TO_RAD MATH_E "
"MATH_LOG10_OF_E MATH_LOG2_OF_E MATH_LOG_OF_10 MATH_LOG_OF_2 MATH_PI MATH_PI_OVER_2 MATH_PI_OVER_3 MATH_PI_OVER_4 "
"MATH_RAD_TO_DEG MATH_REAL MATH_SQRT_2 MATH_SQRT_PI MAXIMUM( MINIMUM( MODE_ERROR MONDAY "
"NAME_ERROR NATURAL NOTE NOW NUMERIC_BIT NUMERIC_BIT_UNSIGNED NUMERIC_STD Nextafter( "
"OCTAL_READ OCTAL_WRITE OPEN_OK OREAD( OUTPUT OWRITE( POLAR_TO_COMPLEX( POSITIVE POSITIVE_REAL PRINCIPAL_VALUE "
"READ( READLINE( READ_MODE READ_WRITE_MODE REAL REALMAX( REALMIN( REAL_VECTOR REFLECTION RESIZE( RESOLUTION_LIMIT "
"RIGHT RISING_EDGE( ROTATE_LEFT( ROTATE_RIGHT( ROUND( "
"SATURDAY SECONDS_TO_TIME( SEVERITY_LEVEL SFix_high( SFix_low( SHIFT_LEFT( SHIFT_RIGHT( SIDE SIGN( SIGNED SIN( SINH( "
"SQRT( SREAD( STANDARD STATE_CLOSED STATE_OPEN STATUS_ACCESS_DENIED STATUS_ERROR STATUS_ITEM_EXISTS "
"STATUS_NOT_EMPTY STATUS_NOT_FOUND STATUS_NO_DIRECTORY STATUS_NO_FILE STATUS_OK "
"STD_LOGIC STD_LOGIC_VECTOR STD_MATCH( STD_ULOGIC STD_ULOGIC_VECTOR STOP STOP( STRING STRING_READ STRING_WRITE SUNDAY "
"SWRITE "
"TAN( TANH( TEE( TEXT TEXTIO THURSDAY TIME TIME_RECORD TIME_TO_SECONDS( TIME_VECTOR "
"TOOL_EDITION TOOL_NAME TOOL_TYPE TOOL_VENDOR TOOL_VERSION TO_01( TO_BINARY_STRING TO_BSTRING TO_HEX_STRING TO_HSTRING( "
"TO_INTEGER( TO_OCTAL_STRING TO_OSTRING( TO_SIGNED( TO_STRING( TO_UNSIGNED( TRUE TRUNC( TUESDAY To_BV To_Bit_Vector "
"To_SLV To_SULV To_StdLogicVector( To_StdULogic( To_StdULogicVector( To_Std_Logic_Vector To_Std_ULogic_Vector To_UX01( "
"To_X01( To_X01Z( To_bit( To_bitvector( "
"UFix_high( UFix_low( UNIFORM( UNRESOLVED_SIGNED UNRESOLVED_UNSIGNED "
"UNRESOLVED_float UNRESOLVED_float128 UNRESOLVED_float32 UNRESOLVED_float64 UNRESOLVED_sfixed UNRESOLVED_ufixed UNSIGNED "
"UX01 UX01Z U_SIGNED U_UNSIGNED U_float U_float128 U_float32 U_float64 U_sfixed U_ufixed Unordered( "
"VHDL_VERSION WARNING WEDNESDAY WIDTH WRITE( WRITELINE( WRITE_MODE X01 X01Z to_SFix( to_UFix( "

, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_VHDL[] = {
	EDITSTYLE_DEFAULT,
	{ MULTI_STYLE(SCE_VHDL_KEYWORD, SCE_VHDL_FOLDING_KEYWORD, SCE_VHDL_KEYWORD_DEMOTED, 0), NP2StyleX_Keyword, L"bold; fore:#FF8000" },
	{ SCE_VHDL_DIRECTIVE, NP2StyleX_Directive, L"fore:#FF8000" },
	{ SCE_VHDL_ATTRIBUTE, NP2StyleX_Attribute, L"fore:#8080FF" },
	{ SCE_VHDL_PACKAGE, NP2StyleX_Package, L"bold; fore:#007F7F" },
	{ SCE_VHDL_STDFUNCTION, NP2StyleX_StandardFunction, L"fore:#0080C0" },
	{ SCE_VHDL_STDTYPE, NP2StyleX_StandardType, L"bold; fore:#1E90FF" },
	{ SCE_VHDL_TYPE, NP2StyleX_Type, L"fore:#0080FF" },
	{ SCE_VHDL_CONSTANT, NP2StyleX_Constant, L"bold; fore:#008080" },
	//{ SCE_VHDL_FUNCTION_DEFINITION, NP2StyleX_FunctionDefinition, L"bold; fore:#A46000" },
	{ SCE_VHDL_FUNCTION, NP2StyleX_Function, L"fore:#A46000" },
	{ MULTI_STYLE(SCE_VHDL_COMMENTLINE, SCE_VHDL_COMMENTBLOCK, 0, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ MULTI_STYLE(SCE_VHDL_COMMENTLINEDOC, SCE_VHDL_COMMENTBLOCKDOC, 0, 0), NP2StyleX_DocComment, L"fore:#408040" },
	{ MULTI_STYLE(SCE_VHDL_STRING, SCE_VHDL_CHARACTER, 0, 0), NP2StyleX_String, L"fore:#008000" },
	{ SCE_VHDL_LABEL, NP2StyleX_Label, L"back:#FFC040" },
	{ SCE_VHDL_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ MULTI_STYLE(SCE_VHDL_OPERATOR, SCE_VHDL_OPERATOR2, 0, 0), NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexVHDL = {
	SCLEX_VHDL, NP2LEX_VHDL,
//Settings++Autogenerated -- start of section automatically generated
		LexerAttr_Default,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 0) | (1 << 1), // level1, level2
		0,
		'\0', 0, 0,
		0,
		SCE_VHDL_CHARACTER, 0,
		SCE_VHDL_OPERATOR, SCE_VHDL_OPERATOR2
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_PreSorted) // code folding
		| KeywordAttr32(2, KeywordAttr_PreSorted) // types
		| KeywordAttr32(3, KeywordAttr_NoLexer | KeywordAttr_NoAutoComp) // directives
		| KeywordAttr32(4, KeywordAttr_NoLexer | KeywordAttr_NoAutoComp) // attributes
		| KeywordAttr32(5, KeywordAttr_PreSorted) // functions
		| KeywordAttr32(6, KeywordAttr_PreSorted) // constants
		| KeywordAttr64(7, KeywordAttr_PreSorted) // packages
		| KeywordAttr64(8, KeywordAttr_NoLexer) // misc
		, SCE_VHDL_TASKMARKER,
		SCE_VHDL_CHARACTER, SCE_VHDL_STRING,
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"VHDL Source", Styles_VHDL),
	L"vhd; vhdl",
	&Keywords_VHDL,
	Styles_VHDL
};
