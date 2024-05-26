#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_Rust = {{
//++Autogenerated -- start of section automatically generated
"Self as async await break const continue crate dyn else enum extern false fn for if impl in let loop match mod move mut "
"pub ref return self static struct super trait true type union unsafe use where while "

, // 1 reserved keywords
"abstract become box do final macro override priv try typeof unsized virtual yield "

, // 2 primitive types
"array bool "
"c_char c_double c_float c_int c_long c_longlong c_schar c_short c_uchar c_uint c_ulong c_ulonglong c_ushort char "
"f32 f64 i128 i16 i32 i64 i8 isize never pointer reference slice str tuple u128 u16 u32 u64 u8 unit usize "

, // 3 struct
"AccessError AddrParseError Ancestors Arc Args ArgsOs Arguments AssertUnwindSafe AtomicBool "
"AtomicI16 AtomicI32 AtomicI64 AtomicI8 AtomicIsize AtomicPtr AtomicU16 AtomicU32 AtomicU64 AtomicU8 AtomicUsize "
"BTreeMap BTreeSet Barrier BarrierWaitResult BinaryHeap BorrowError BorrowMutError Box "
"BufReader BufWriter BuildHasherDefault Builder Bytes "
"CStr CString Cell Chain CharIndices CharTryFromError Chars Child ChildStderr ChildStdin ChildStdout "
"Chunks ChunksExact ChunksExactMut ChunksMut Cloned Command Components Condvar Context Copied Cursor Cycle "
"DebugList DebugMap DebugSet DebugStruct DebugTuple DecodeUtf16 DecodeUtf16Error "
"DirBuilder DirEntry Discriminant Display Drain Duration "
"Empty EncodeUtf16 Enumerate Error EscapeDebug EscapeDefault EscapeUnicode ExitStatus "
"File FileType Filter FilterMap FlatMap Flatten Formatter FromBytesWithNulError FromFn FromUtf16Error FromUtf8Error Fuse "
"HashMap HashSet "
"Incoming Inspect Instant IntoInnerError IntoIter IntoStringError IoSlice IoSliceMut Ipv4Addr Ipv6Addr Iter IterMut "
"JoinHandle JoinPathsError Layout LayoutErr LineWriter Lines LinkedList LocalKey Location "
"ManuallyDrop Map MatchIndices Matches Metadata Mutex MutexGuard "
"NonNull NonZeroI128 NonZeroI16 NonZeroI32 NonZeroI64 NonZeroI8 NonZeroIsize "
"NonZeroU128 NonZeroU16 NonZeroU32 NonZeroU64 NonZeroU8 NonZeroUsize NulError "
"Once OpenOptions OsStr OsString Output "
"PanicInfo ParseBoolError ParseCharError ParseFloatError ParseIntError Path PathBuf Peekable Permissions "
"PhantomData PhantomPinned Pin PoisonError PrefixComponent "
"RChunks RChunksExact RChunksExactMut RChunksMut RMatchIndices RMatches "
"RSplit RSplitMut RSplitN RSplitNMut RSplitTerminator "
"Range RangeFrom RangeFull RangeInclusive RangeTo RangeToInclusive RawWaker RawWakerVTable Rc "
"ReadDir Receiver RecvError Ref RefCell RefMut Repeat RepeatWith Rev Reverse RwLock RwLockReadGuard RwLockWriteGuard "
"Scan SendError Sender Sink Skip SkipWhile SocketAddrV4 SocketAddrV6 "
"Splice Split SplitAsciiWhitespace SplitMut SplitN SplitNMut SplitPaths SplitTerminator SplitWhitespace "
"Stderr StderrLock Stdin StdinLock Stdio Stdout StdoutLock StepBy String StripPrefixError Successors "
"SyncSender System SystemTime SystemTimeError "
"Take TakeWhile TcpListener TcpStream Thread ThreadId ToLowercase ToUppercase TryFromIntError TryFromSliceError TryIter "
"TypeId "
"UdpSocket UnsafeCell Utf8Error Vars VarsOs Vec VecDeque WaitTimeoutResult Waker Weak Windows Wrapping Zip "

, // 4 trait
"Add AddAssign Any AsMut AsRef "
"Binary BitAnd BitAndAssign BitOr BitOrAssign BitXor BitXorAssign Borrow BorrowMut BufRead BuildHasher Clone Copy "
"Debug Default Deref DerefMut Div DivAssign DoubleEndedIterator Drop Eq ExactSizeIterator Extend "
"Fn FnMut FnOnce From FromIterator FromStr FusedIterator Future GlobalAlloc Hash Hasher "
"Index IndexMut Into IntoIterator Iterator LowerExp LowerHex Mul MulAssign Neg Not Octal Ord "
"PartialEq PartialOrd Pointer Product RangeBounds Read RefUnwindSafe Rem RemAssign "
"Seek Send Shl ShlAssign Shr ShrAssign Sized SliceIndex Sub SubAssign Sum Sync "
"ToOwned ToSocketAddrs ToString TryFrom TryInto Unpin UnwindSafe UpperExp UpperHex Write "

, // 5 enumeration
"AcqRel Acquire AddrInUse AddrNotAvailable Alignment AlreadyExists Borrowed Both Bound BrokenPipe "
"Center Component ConnectionAborted ConnectionRefused ConnectionReset Cow CurDir Current DeviceNS Disconnected Disk "
"End Equal Err ErrorKind Excluded FpCategory Full Greater "
"Included Infallible Infinite Interrupted InvalidData InvalidInput IpAddr Left Less LockResult "
"Nan None Normal NotConnected NotFound NotPresent NotUnicode Ok Option Ordering Other Owned "
"ParentDir ParseError Pending PermissionDenied Poisoned Poll Prefix "
"Ready RecvTimeoutError Relaxed Release Result Right RootDir SeekFrom SeqCst Shutdown SocketAddr Some Start Subnormal "
"TimedOut Timeout TryLockError TryLockResult TryRecvError TrySendError UNC Unbounded UnexpectedEof "
"V4 V6 VarError Verbatim VerbatimDisk VerbatimUNC WouldBlock WriteZero Zero c_void "

, // 6 union
"MaybeUninit "

, // 7 constant
"ARCH BROADCAST DIGITS DLL_EXTENSION DLL_PREFIX DLL_SUFFIX EPSILON EXE_EXTENSION EXE_SUFFIX FAMILY INFINITY LOCALHOST "
"MAIN_SEPARATOR MANTISSA_DIGITS MAX MAX_10_EXP MAX_EXP MIN MIN_10_EXP MIN_EXP MIN_POSITIVE NAN NEG_INFINITY OS "
"RADIX REPLACEMENT_CHARACTER UNIX_EPOCH UNSPECIFIED "

, // 8 attribute
"align( all( allow( always any( cfg( cfg_attr( cold crate_name crate_type "
"debug_assertions deny( deprecated deprecated( derive( enable expected export_name forbid( global_allocator "
"ignore inline inline( kind lazy_static link( link_name link_section local_inner_macros "
"macro_export macro_export( macro_use macro_use( must_use "
"name never no_builtins no_implicit_prelude no_link no_main no_mangle no_std not( "
"packed( panic_handler path proc_macro proc_macro_attribute proc_macro_derive( recursion_limit repr( should_panic( "
"target_arch target_endian target_env target_family target_feature target_feature( target_os target_pointer_width "
"target_vendor test type_length_limit "
"unix used warn( windows windows_subsystem "

, // 9 macro
"assert!( assert_eq!( assert_ne!( cfg!( column!( compile_error!( concat!( "
"dbg!( debug_assert!( debug_assert_eq!( debug_assert_ne!( env!( eprint!( eprintln!( file!( format!( format_args!( "
"include!( include_bytes!( include_str!( is_x86_feature_detected!( line!( macro_rules! module_path!( option_env!( "
"panic!( print!( println!( stringify!( thread_local!( unimplemented!( unreachable!( vec!( write!( writeln!( "

, // 10 module
"alloc any ascii atomic borrow boxed cell clone cmp collections consts convert default env error ffi fmt fs future "
"hash hint intrinsics io iter marker mem mpsc net num ops option os panic path pin prelude process ptr raw rc result "
"std string sync task thread time vec "

, // 11 function
"abort( abs( accept( accessed( acos( acosh( add( add_assign( "
"align( align_of( align_of_val( align_offset( align_to( align_to_mut( all( alloc( alloc_zeroed( alternate( "
"ancestors( and( and_then( any( append( arg( args( args_os( as_bytes( as_bytes_mut( as_bytes_with_nul( as_c_str( "
"as_micros( as_millis( as_mut( as_mut_ptr( as_mut_slice( as_mut_slices( as_mut_str( as_mut_vec( as_nanos( as_os_str( "
"as_path( as_pin_mut( as_pin_ref( as_ptr( as_ref( "
"as_secs( as_secs_f32( as_secs_f64( as_slice( as_slice_of_cells( as_slices( as_str( asin( asinh( assume_init( "
"atan( atan2( atanh( "
"back( back_mut( binary_search( binary_search_by( binary_search_by_key( bind( "
"bitand( bitand_assign( bitor( bitor_assign( bitxor( bitxor_assign( borrow( borrow_mut( broadcast( buffer( build_hasher( "
"by_ref( bytes( "
"call_once( canonicalize( capacity( cast( catch_unwind( cbrt( ceil( chain( channel( char_indices( chars( "
"checked_abs( checked_add( checked_div( checked_div_euclid( checked_mul( checked_neg( checked_next_power_of_two( "
"checked_pow( checked_rem( checked_rem_euclid( checked_shl( checked_shr( checked_sub( "
"chunks( chunks_exact( chunks_exact_mut( chunks_mut( classify( clear( clone( clone_from( clone_from_slice( cloned( cmp( "
"code( collect( column( compare_and_swap( compare_exchange( compare_exchange_weak( compiler_fence( components( "
"concat( connect( connect_timeout( consume( contains( contains_key( copied( copy( "
"copy_from( copy_from_nonoverlapping( copy_from_slice( copy_nonoverlapping( copy_to( copy_to_nonoverlapping( "
"copy_within( copysign( cos( cosh( count( count_ones( count_zeros( "
"create( create_dir( create_dir_all( create_new( created( current( current_dir( current_exe( cycle( "
"dangling( dealloc( debug_list( debug_map( debug_set( debug_struct( debug_tuple( decode_utf16( "
"dedup( dedup_by( dedup_by_key( default( deref( deref_mut( description( "
"difference( discriminant( display( div( div_assign( div_euclid( div_f32( div_f64( "
"downcast( downcast_mut( downcast_ref( downgrade( drain( drop( drop_in_place( duration( duration_since( "
"elapsed( empty( "
"encode_utf16( encode_utf8( end( end_bound( ends_with( entries( entry( enumerate( env( env_clear( env_remove( envs( "
"eq( eq_ignore_ascii_case( err( error( error_len( escape_debug( escape_default( escape_unicode( "
"exists( exit( exp( exp2( exp_m1( expect( expect_err( extend( extend_from_slice( extension( "
"fence( fetch_add( fetch_and( fetch_nand( fetch_or( fetch_sub( fetch_xor( field( "
"file( file_name( file_stem( file_type( fill( fill_buf( filter( filter_map( find( find_map( finish( first( first_mut( "
"flat_map( flatten( floor( flowinfo( flush( fmt( fold( for_each( for_value( forget( format( fract( from( "
"from_be( from_be_bytes( from_bits( from_boxed_utf8_unchecked( from_bytes_with_nul( from_bytes_with_nul_unchecked( "
"from_digit( from_fn( from_iter( from_le( from_le_bytes( from_micros( from_millis( from_mut( from_nanos( from_ne_bytes( "
"from_ptr( from_raw( from_raw_os_error( from_raw_parts( from_raw_parts_mut( from_ref( "
"from_secs( from_secs_f32( from_secs_f64( from_size_align( from_size_align_unchecked( from_str( from_str_radix( "
"from_u32( from_u32_unchecked( "
"from_utf16( from_utf16_lossy( from_utf8( from_utf8_lossy( from_utf8_mut( from_utf8_unchecked( from_utf8_unchecked_mut( "
"from_vec_unchecked( from_waker( front( front_mut( fuse( "
"ge( get( get_mut( get_or_insert( get_or_insert_with( get_ref( get_unchecked( get_unchecked_mut( gt( "
"handle_alloc_error( hard_link( has_root( hash( hash_slice( hasher( hypot( "
"id( identity( incoming( index( index_mut( inherit( insert( insert_str( inspect( intersection( into( "
"into_boxed_bytes( into_boxed_c_str( into_boxed_os_str( into_boxed_path( into_boxed_slice( into_boxed_str( "
"into_bytes( into_bytes_with_nul( into_c_string( into_cstring( into_inner( into_iter( into_os_string( into_owned( "
"into_path_buf( into_raw( into_ref( into_remainder( into_slice( into_sorted_vec( into_string( into_vec( ip( is( "
"is_absolute( is_alphabetic( is_alphanumeric( is_ascii( is_ascii_alphabetic( is_ascii_alphanumeric( is_ascii_control( "
"is_ascii_digit( is_ascii_graphic( is_ascii_hexdigit( is_ascii_lowercase( is_ascii_punctuation( is_ascii_uppercase( "
"is_ascii_whitespace( is_broadcast( is_char_boundary( is_control( is_digit( is_dir( is_disjoint( is_documentation( "
"is_empty( is_err( is_file( is_finite( is_infinite( is_ipv4( is_ipv6( "
"is_leader( is_link_local( is_loopback( is_lowercase( is_multicast( "
"is_nan( is_negative( is_none( is_normal( is_null( is_numeric( is_ok( "
"is_pending( is_poisoned( is_positive( is_power_of_two( is_private( is_ready( is_relative( "
"is_separator( is_sign_negative( is_sign_positive( is_some( is_subset( is_superset( is_symlink( "
"is_unspecified( is_uppercase( is_verbatim( is_whitespace( iter( iter_mut( "
"join( join_multicast_v4( join_multicast_v6( join_paths( keys( kill( kind( "
"last( last_mut( last_os_error( "
"le( leading_zeros( leak( leave_multicast_v4( leave_multicast_v6( len( len_utf16( len_utf8( limit( line( lines( "
"ln( ln_1p( load( local_addr( location( lock( log( log10( log2( lt( "
"make_ascii_lowercase( make_ascii_uppercase( make_mut( "
"map( map_err( map_ok( map_or( map_or_else( map_split( map_unchecked( map_unchecked_mut( match_indices( matches( "
"max( max_by( max_by_key( max_value( metadata( min( min_by( min_by_key( min_value( modified( "
"mul( mul_add( mul_assign( mul_f32( mul_f64( multicast_loop_v4( multicast_loop_v6( multicast_ttl_v4( "
"name( ne( needs_drop( neg( new( new_unchecked( next( next_back( next_power_of_two( "
"nodelay( not( notify_all( notify_one( now( nth( nth_back( nul_position( null( null_mut( "
"octets( of( offset( ok( ok_or( ok_or_else( once( open( or( or_else( output( overflowing_abs( overflowing_add( "
"overflowing_div( overflowing_div_euclid( overflowing_mul( overflowing_neg( overflowing_pow( "
"overflowing_rem( overflowing_rem_euclid( overflowing_shl( overflowing_shr( overflowing_sub( "
"pad( pad_integral( panicking( parent( park( park_timeout( parse( partial_cmp( partition( path( payload( "
"peek( peek_from( peek_mut( peekable( peer_addr( permissions( pin( piped( "
"poll( pop( pop_back( pop_front( port( position( pow( powf( powi( precision( product( ptr_eq( "
"push( push_back( push_front( push_str( "
"range( range_mut( raw_os_error( rchunks( rchunks_exact( rchunks_exact_mut( rchunks_mut( read( read_dir( read_exact( "
"read_line( read_link( read_timeout( read_to_end( read_to_string( read_unaligned( read_until( "
"read_vectored( read_volatile( readonly( realloc( recip( recursive( recv( recv_from( recv_timeout( "
"rem( rem_assign( rem_euclid( remainder( remove( remove_dir( remove_dir_all( remove_entry( remove_file( remove_var( "
"rename( repeat( repeat_with( replace( replace_range( replace_with( replacen( "
"reserve( reserve_exact( resize( resize_with( resume_unwind( retain( rev( reverse( reverse_bits( rfind( rfold( "
"rmatch_indices( rmatches( rotate_left( rotate_right( round( rposition( "
"rsplit( rsplit_mut( rsplit_terminator( rsplitn( rsplitn_mut( "
"saturating_add( saturating_mul( saturating_pow( saturating_sub( scan( scope_id( seek( segments( send( send_to( set( "
"set_broadcast( set_current_dir( set_extension( set_file_name( set_flowinfo( set_hook( set_ip( set_len( set_limit( "
"set_multicast_loop_v4( set_multicast_loop_v6( set_multicast_ttl_v4( set_nodelay( set_nonblocking( "
"set_permissions( set_port( set_position( set_read_timeout( set_readonly( set_scope_id( set_ttl( set_var( "
"set_write_timeout( shl( shl_assign( shr( shr_assign( shrink_to_fit( shutdown( "
"sign_aware_zero_pad( sign_minus( sign_plus( signum( sin( sin_cos( sinh( sink( size( size_hint( size_of( size_of_val( "
"skip( skip_while( sleep( "
"sort( sort_by( sort_by_cached_key( sort_by_key( sort_unstable( sort_unstable_by( sort_unstable_by_key( source( spawn( "
"spin_loop_hint( splice( split( split_ascii_whitespace( split_at( split_at_mut( split_first( split_first_mut( "
"split_last( split_last_mut( split_mut( split_off( split_paths( split_terminator( split_whitespace( splitn( splitn_mut( "
"sqrt( "
"stack_size( start( start_bound( starts_with( status( stderr( stdin( stdout( step_by( store( strip_prefix( strong_count( "
"sub( sub_assign( subsec_micros( subsec_millis( subsec_nanos( success( successors( sum( "
"swap( swap_bytes( swap_nonoverlapping( swap_remove( swap_remove_back( swap_remove_front( swap_with_slice( "
"symlink_metadata( symmetric_difference( sync_all( sync_channel( sync_data( "
"take( take_error( take_hook( take_while( tan( tanh( temp_dir( then( then_with( thread( timed_out( "
"to_ascii_lowercase( to_ascii_uppercase( to_be( to_be_bytes( to_bits( to_bytes( to_bytes_with_nul( to_degrees( to_digit( "
"to_ipv4( to_ipv6_compatible( to_ipv6_mapped( to_le( to_le_bytes( to_lowercase( to_mut( to_ne_bytes( "
"to_os_string( to_owned( to_path_buf( to_radians( to_socket_addrs( to_str( to_string( to_string_lossy( to_uppercase( "
"to_vec( trailing_zeros( transmute( transmute_copy( transpose( "
"trim( trim_end( trim_end_matches( trim_matches( trim_start( trim_start_matches( trunc( truncate( "
"try_borrow( try_borrow_mut( try_borrow_unguarded( try_clone( try_fold( try_for_each( try_from( try_into( try_iter( "
"try_lock( try_read( try_recv( try_rfold( try_send( try_unwrap( try_wait( try_with( try_write( ttl( type_id( "
"uninit( unpaired_surrogate( unpark( unreachable_unchecked( "
"unwrap( unwrap_err( unwrap_or( unwrap_or_default( unwrap_or_else( unzip( upgrade( utf8_error( "
"valid_up_to( values( values_mut( var( var_os( vars( vars_os( "
"wait( wait_timeout( wait_with_output( wake( wake_by_ref( waker( weak_count( "
"width( will_wake( windows( with( with_capacity( with_capacity_and_hasher( with_extension( with_file_name( with_hasher( "
"wrapping_abs( wrapping_add( wrapping_div( wrapping_div_euclid( wrapping_mul( wrapping_neg( wrapping_offset( "
"wrapping_pow( wrapping_rem( wrapping_rem_euclid( wrapping_shl( wrapping_shr( wrapping_sub( write( write_all( "
"write_bytes( write_char( write_fmt( write_i128( write_i16( write_i32( write_i64( write_i8( write_isize( write_str( "
"write_timeout( write_u128( write_u16( write_u32( write_u64( write_u8( write_unaligned( write_usize( "
"write_vectored( write_volatile( "
"xor( yield_now( zeroed( zip( "

, nullptr, nullptr, nullptr, nullptr
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_Rust[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_RUST_WORD, NP2StyleX_Keyword, L"fore:#0000FF" },
	{ SCE_RUST_WORD2, NP2StyleX_ReservedWord, L"fore:#B000B0" },
	{ SCE_RUST_TYPE, NP2StyleX_Type, L"fore:#0080FF" },
	{ SCE_RUST_ATTRIBUTE, NP2StyleX_Attribute, L"fore:#FF8000" },
	{ SCE_RUST_STRUCT, NP2StyleX_Structure, L"bold; fore:#007F7F" },
	{ SCE_RUST_UNION, NP2StyleX_Union, L"fore:#0080FF" },
	{ SCE_RUST_TRAIT, NP2StyleX_Trait, L"bold; fore:#1E90FF" },
	{ SCE_RUST_ENUMERATION, NP2StyleX_Enumeration, L"fore:#FF8000" },
	{ SCE_RUST_CONSTANT, NP2StyleX_Constant, L"fore:#B000B0" },
	{ SCE_RUST_MACRO, NP2StyleX_Macro, L"fore:#FF8000" },
	{ SCE_RUST_FUNCTION_DEFINITION, NP2StyleX_FunctionDefinition, L"bold; fore:#A46000" },
	{ SCE_RUST_FUNCTION, NP2StyleX_Function, L"fore:#A46000" },
	{ MULTI_STYLE(SCE_RUST_COMMENTBLOCK, SCE_RUST_COMMENTLINE, 0, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ MULTI_STYLE(SCE_RUST_COMMENTBLOCKDOC, SCE_RUST_COMMENTLINEDOC, 0, 0), NP2StyleX_DocComment, L"fore:#408040" },
	{ SCE_RUST_TASKMARKER, NP2StyleX_TaskMarker, L"bold; fore:#408080" },
	{ MULTI_STYLE(SCE_RUST_CHARACTER, SCE_RUST_STRING, 0, 0), NP2StyleX_String, L"fore:#008000" },
	{ SCE_RUST_RAW_STRING, NP2StyleX_RawString, L"fore:#008080" },
	{ MULTI_STYLE(SCE_RUST_BYTESTRING, SCE_RUST_BYTE_CHARACTER, 0, 0), NP2StyleX_Bytes, L"fore:#C08000" },
	{ SCE_RUST_RAW_BYTESTRING, NP2StyleX_RawBytes, L"fore:#648000" },
	{ SCE_RUST_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_RUST_FORMAT_SPECIFIER, NP2StyleX_FormatSpecifier, L"fore:#7C5AF3" },
	{ SCE_RUST_PLACEHOLDER, NP2StyleX_Placeholder, L"fore:#8080FF" },
	{ SCE_RUST_LIFETIME, NP2StyleX_Lifetime, L"fore:#7C5AF3" },
	{ SCE_RUST_VARIABLE, NP2StyleX_Variable, L"fore:#9E4D2A" },
	{ SCE_RUST_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ SCE_RUST_OPERATOR, NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexRust = {
	SCLEX_RUST, NP2LEX_RUST,
//Settings++Autogenerated -- start of section automatically generated
		LexerAttr_AngleBracketGeneric |
		LexerAttr_CharacterPrefix,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 0) | (1 << 1), // struct, function
		SCE_RUST_FUNCTION_DEFINITION,
		'\\', SCE_RUST_ESCAPECHAR, SCE_RUST_FORMAT_SPECIFIER,
		0,
		SCE_RUST_CHARACTER, SCE_RUST_LIFETIME,
		SCE_RUST_OPERATOR, 0
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_PreSorted | KeywordAttr_NoAutoComp) // reserved keywords
		| KeywordAttr32(2, KeywordAttr_PreSorted) // primitive types
		| KeywordAttr32(3, KeywordAttr_PreSorted) // struct
		| KeywordAttr32(4, KeywordAttr_PreSorted) // trait
		| KeywordAttr32(5, KeywordAttr_PreSorted) // enumeration
		| KeywordAttr32(6, KeywordAttr_PreSorted) // union
		| KeywordAttr64(7, KeywordAttr_PreSorted) // constant
		| KeywordAttr64(8, KeywordAttr_NoLexer) // attribute
		| KeywordAttr64(9, KeywordAttr_NoLexer) // macro
		| KeywordAttr64(10, KeywordAttr_NoLexer) // module
		| KeywordAttr64(11, KeywordAttr_NoLexer) // function
		, SCE_RUST_TASKMARKER,
		SCE_RUST_CHARACTER, SCE_RUST_FORMAT_SPECIFIER,
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"Rust Source", Styles_Rust),
	L"rs",
	&Keywords_Rust,
	Styles_Rust
};
