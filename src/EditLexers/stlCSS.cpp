#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_CSS = {{
//++Autogenerated -- start of section automatically generated
"^-- ^-moz- ^-ms- ^-o- ^-webkit- "
"accent-color additive-symbols align-content align-items align-self alignment-baseline all anchor-name anchor-scope "
"animation animation-composition animation-delay animation-direction animation-duration animation-fill-mode "
"animation-iteration-count animation-name animation-play-state animation-range animation-range-end animation-range-start "
"animation-timeline animation-timing-function any-hover any-pointer appearance ascent-override aspect-ratio azimuth "
"backdrop-filter backface-visibility background background-attachment background-blend-mode "
"background-clip background-color background-image background-origin background-position background-repeat "
"background-size base-palette baseline-shift baseline-source "
"bleed block-ellipsis block-size block-step block-step-align block-step-insert block-step-round block-step-size "
"bookmark-label bookmark-level bookmark-state border border-block border-block-color "
"border-block-end border-block-end-color border-block-end-style border-block-end-width "
"border-block-start border-block-start-color border-block-start-style border-block-start-width border-block-style "
"border-block-width border-bottom "
"border-bottom-color border-bottom-left-radius border-bottom-right-radius border-bottom-style border-bottom-width "
"border-boundary border-collapse border-color border-end-end-radius border-end-start-radius "
"border-image border-image-outset border-image-repeat border-image-slice border-image-source border-image-width "
"border-inline border-inline-color "
"border-inline-end border-inline-end-color border-inline-end-style border-inline-end-width "
"border-inline-start border-inline-start-color border-inline-start-style border-inline-start-width border-inline-style "
"border-inline-width border-left border-left-color border-left-style border-left-width "
"border-radius border-right border-right-color border-right-style border-right-width "
"border-spacing border-start-end-radius border-start-start-radius border-style "
"border-top border-top-color border-top-left-radius border-top-right-radius border-top-style border-top-width "
"border-width bottom box-decoration-break box-shadow box-sizing box-snap break-after break-before break-inside "
"caption-side caret caret-animation caret-color caret-shape chains clear clip clip-path clip-rule "
"color color-adjust color-gamut color-index color-interpolation-filters color-rendering color-scheme column-count "
"column-fill column-gap column-rule column-rule-color column-rule-style column-rule-width column-span column-width "
"columns components contain contain-intrinsic-block-size contain-intrinsic-height contain-intrinsic-inline-size "
"contain-intrinsic-size contain-intrinsic-width container container-name container-type content content-visibility "
"continue counter-increment counter-reset counter-set cue cue-after cue-before cursor "
"descent-override device-aspect-ratio device-height device-width direction display display-mode dominant-baseline "
"dynamic-range "
"elevation empty-cells environment-blending "
"fallback field-sizing "
"fill fill-break fill-color fill-image fill-opacity fill-origin fill-position fill-repeat fill-rule fill-size filter "
"flex flex-basis flex-direction flex-flow flex-grow flex-shrink flex-wrap "
"float float-defer float-offset float-reference flood-color flood-opacity flow flow-from flow-into font font-display "
"font-family font-feature-settings font-kerning font-language-override font-named-instance font-optical-sizing "
"font-palette font-size font-size-adjust font-stretch font-style "
"font-synthesis font-synthesis-position font-synthesis-small-caps font-synthesis-style font-synthesis-weight "
"font-variant font-variant-alternates font-variant-caps font-variant-east-asian font-variant-emoji "
"font-variant-ligatures font-variant-numeric font-variant-position font-variation-settings font-weight font-width "
"footnote-display footnote-policy forced-color-adjust forced-colors "
"gap glyph-orientation-vertical grid grid-area grid-auto-columns grid-auto-flow grid-auto-rows "
"grid-column grid-column-end grid-column-gap grid-column-start grid-gap "
"grid-row grid-row-end grid-row-gap grid-row-start "
"grid-template grid-template-areas grid-template-columns grid-template-rows "
"hanging-punctuation height horizontal-viewport-segments hover "
"hyphenate-character hyphenate-limit-chars hyphenate-limit-last hyphenate-limit-lines hyphenate-limit-zone hyphens "
"image-orientation image-rendering image-resolution inherits "
"initial-letter initial-letter-align initial-letter-wrap initial-value inline-size inline-sizing input-security "
"inset inset-area inset-block inset-block-end inset-block-start inset-inline inset-inline-end inset-inline-start "
"inverted-colors isolation "
"justify-content justify-items justify-self "
"left letter-spacing lighting-color "
"line-break line-clamp line-gap-override line-grid line-height line-height-step line-padding line-snap "
"list-style list-style-image list-style-position list-style-type "
"margin margin-block margin-block-end margin-block-start margin-bottom margin-break "
"margin-inline margin-inline-end margin-inline-start margin-left margin-right margin-top margin-trim marker "
"marker-end marker-knockout-left marker-knockout-right marker-mid marker-pattern marker-segment marker-side marker-start "
"marks mask mask-border "
"mask-border-mode mask-border-outset mask-border-repeat mask-border-slice mask-border-source mask-border-width "
"mask-clip mask-composite mask-image mask-mode mask-origin mask-position mask-repeat mask-size mask-type "
"max-aspect-ratio max-block-size max-device-aspect-ratio max-device-height max-device-width max-height max-inline-size "
"max-lines max-resolution max-width min-aspect-ratio min-block-size "
"min-device-aspect-ratio min-device-height min-device-width min-height min-inline-size min-intrinsic-sizing "
"min-resolution min-width mix-blend-mode monochrome "
"nav-controls nav-down nav-left nav-right nav-up negative "
"object-fit object-position offset offset-anchor offset-distance offset-path offset-position offset-rotate opacity "
"order orientation orphans outline outline-color outline-offset outline-style outline-width overflow overflow-anchor "
"overflow-block overflow-clip-margin "
"overflow-clip-margin-block overflow-clip-margin-block-end overflow-clip-margin-block-start overflow-clip-margin-bottom "
"overflow-clip-margin-inline overflow-clip-margin-inline-end overflow-clip-margin-inline-start overflow-clip-margin-left "
"overflow-clip-margin-right overflow-clip-margin-top overflow-inline overflow-wrap overflow-x overflow-y override-colors "
"overscroll-behavior overscroll-behavior-block overscroll-behavior-inline overscroll-behavior-x overscroll-behavior-y "
"pad padding padding-block padding-block-end padding-block-start padding-bottom "
"padding-inline padding-inline-end padding-inline-start padding-left padding-right padding-top "
"page page-break-after page-break-before page-break-inside page-orientation pause pause-after pause-before "
"perspective perspective-origin pitch pitch-range place-content place-items place-self play-during "
"pointer pointer-events "
"position position-anchor position-try position-try-options position-try-order position-visibility "
"prefers-color-scheme prefers-contrast prefers-reduced-data prefers-reduced-motion prefers-reduced-transparency prefix "
"presentation-level print-color-adjust "
"quotes "
"range region-fragment rendering-intent resize resolution rest rest-after rest-before richness right rotate row-gap "
"ruby-align ruby-merge ruby-overhang ruby-position running "
"scale scan scripting scroll-behavior scroll-margin "
"scroll-margin-block scroll-margin-block-end scroll-margin-block-start scroll-margin-bottom "
"scroll-margin-inline scroll-margin-inline-end scroll-margin-inline-start scroll-margin-left scroll-margin-right "
"scroll-margin-top scroll-padding "
"scroll-padding-block scroll-padding-block-end scroll-padding-block-start scroll-padding-bottom "
"scroll-padding-inline scroll-padding-inline-end scroll-padding-inline-start scroll-padding-left scroll-padding-right "
"scroll-padding-top scroll-snap-align scroll-snap-stop scroll-snap-type "
"scroll-timeline scroll-timeline-axis scroll-timeline-name scrollbar-color scrollbar-gutter scrollbar-width "
"shape shape-image-threshold shape-inside shape-margin shape-outside shape-padding shape-rendering shape-subtract "
"size size-adjust spatial-navigation-action spatial-navigation-contain spatial-navigation-function "
"speak speak-as speak-header speak-numeral speak-punctuation speech-rate src stress string-set stroke "
"stroke-align stroke-alignment stroke-break stroke-color "
"stroke-dash-corner stroke-dash-justify stroke-dashadjust stroke-dasharray stroke-dashcorner stroke-dashoffset "
"stroke-image stroke-linecap stroke-linejoin stroke-miterlimit stroke-opacity stroke-origin stroke-position "
"stroke-repeat stroke-size stroke-width "
"subscript-position-override subscript-size-override suffix superscript-position-override superscript-size-override "
"symbols syntax system "
"tab-size table-layout text-align text-align-all text-align-last text-anchor text-autospace text-box-edge text-box-trim "
"text-combine-upright text-decoration text-decoration-color text-decoration-fill text-decoration-line "
"text-decoration-skip text-decoration-skip-box text-decoration-skip-ink text-decoration-skip-inset "
"text-decoration-skip-self text-decoration-skip-spaces text-decoration-stroke text-decoration-style "
"text-decoration-thickness text-decoration-trim "
"text-emphasis text-emphasis-color text-emphasis-position text-emphasis-skip text-emphasis-style text-group-align "
"text-indent text-justify text-orientation text-overflow text-rendering "
"text-shadow text-size-adjust text-spacing text-spacing-trim text-transform "
"text-underline-offset text-underline-position text-wrap text-wrap-mode text-wrap-style timeline-scope top touch-action "
"transform transform-box transform-origin transform-style "
"transition transition-behavior transition-delay transition-duration transition-property transition-timing-function "
"translate "
"unicode-bidi unicode-range update user-select "
"vertical-align vertical-viewport-segments video-color-gamut video-dynamic-range "
"view-timeline view-timeline-axis view-timeline-inset view-timeline-name view-transition-class view-transition-name "
"viewport-fit visibility "
"voice-balance voice-duration voice-family voice-pitch voice-range voice-rate voice-stress voice-volume volume "
"white-space white-space-collapse white-space-trim widows width will-change "
"word-break word-space-transform word-spacing word-wrap "
"wrap-after wrap-before wrap-flow wrap-inside wrap-through writing-mode "
"z-index zoom "

, // 1 at rules
"^-moz- ^-ms- ^-o- ^-webkit- annotation at-root "
"bottom-center bottom-left bottom-left-corner bottom-right bottom-right-corner "
"character-variant charset color-profile container counter-style custom-media debug document "
"each else elseif end error extend font-face font-feature-values font-palette-values for forward function "
"historical-forms if import include keyframes layer left-bottom left-middle left-top media mixin namespace nest "
"ornaments page plugin position-try property return right-bottom right-middle right-top "
"scope starting-style styleset stylistic supports swash top-center top-left top-left-corner top-right top-right-corner "
"use view-transition viewport warn when while "

, // 2 pseudo classes
"^-moz- ^-ms- ^-o- ^-webkit- active active-view-transition active-view-transition-type( after any-link autofill "
"before blank buffering checked closed current current( default defined dir( disabled empty enabled extend( "
"first first-child first-letter first-line first-of-type focus focus-visible focus-within fullscreen future "
"has( host host( host-context( hover in-range indeterminate invalid is( "
"lang( last-child last-of-type left link local-link modal muted "
"not( nth-child( nth-col( nth-last-child( nth-last-col( nth-last-of-type( nth-of-type( "
"only-child only-of-type open optional out-of-range past paused picture-in-picture placeholder-shown playing "
"read-only read-write recto required right root scope scope-context( seeking stalled target target-within "
"user-invalid user-valid valid verso visited volume-locked where( "

, // 3 pseudo elements
"^-moz- ^-ms- ^-o- ^-webkit- after before blank( content "
"file-selector-button first-letter first-line footnote-call footnote-marker grammar-error highlight( marker "
"nth-fragment( part( placeholder postfix prefix region selection shadow slot( spelling-error target-text "
"view-transition view-transition-group( view-transition-image-pair( view-transition-new( view-transition-old( "

, // 4 math functions
"abs( acos( asin( atan( atan2( calc( clamp( cos( exp( hypot( log( max( min( mod( pow( rem( round( sign( sin( sqrt( tan( "

, // 5 color names
"aliceblue antiquewhite aqua aquamarine azure beige bisque black blanchedalmond blue blueviolet brown burlywood "
"cadetblue chartreuse chocolate coral cornflowerblue cornsilk crimson cyan "
"darkblue darkcyan darkgoldenrod darkgray darkgreen darkgrey darkkhaki darkmagenta darkolivegreen darkorange darkorchid "
"darkred darksalmon darkseagreen darkslateblue darkslategray darkslategrey darkturquoise darkviolet deeppink deepskyblue "
"dimgray dimgrey dodgerblue "
"firebrick floralwhite forestgreen fuchsia gainsboro ghostwhite gold goldenrod gray green greenyellow grey "
"honeydew hotpink indianred indigo invis ivory khaki "
"lavender lavenderblush lawngreen lemonchiffon lightblue lightcoral lightcyan "
"lightgoldenrod lightgoldenrodyellow lightgray lightgreen lightgrey lightpink "
"lightsalmon lightseagreen lightskyblue lightslateblue lightslategray lightslategrey lightsteelblue lightyellow "
"lime limegreen linen "
"magenta maroon mediumaquamarine mediumblue mediumorchid mediumpurple mediumseagreen mediumslateblue mediumspringgreen "
"mediumturquoise mediumvioletred midnightblue mintcream mistyrose moccasin "
"navajowhite navy navyblue none oldlace olive olivedrab orange orangered orchid "
"palegoldenrod palegreen paleturquoise palevioletred papayawhip peachpuff peru pink plum powderblue purple "
"rebeccapurple red rosybrown royalblue "
"saddlebrown salmon sandybrown seagreen seashell sienna silver skyblue slateblue slategray slategrey snow springgreen "
"steelblue "
"tan teal thistle tomato transparent turquoise violet violetred "
"webgray webgreen webgrey webmaroon webpurple wheat white whitesmoke x11gray x11green x11grey x11maroon x11purple "
"yellow yellowgreen "

, // 6 values
"ActiveText ButtonBorder ButtonFace ButtonText CSS( Canvas CanvasText Field FieldText GrayText Highlight HighlightText "
"LinkText Mark MarkText NaN VisitedText "
"above absolute absolute-colorimetric accumulate add additive adjust( alias "
"all-petite-caps all-scroll all-small-caps allow-discrete allow-end alpha alpha( alphabetic alphamix( "
"alternate alternate-reverse always anchor( anchor-size( anchors-valid anchors-visible and annotation( anywhere append( "
"arcs argb( arguments armenian as at attr( audio aural auto auto-flow auto-phrase "
"average( avoid avoid-column avoid-flex avoid-line avoid-page avoid-region "
"back backwards balance balance-all bar baseline behind below bevel bidi-override bitmap "
"blackness( blink block block-end block-start blue( blur( bold bolder boolean( border-box both both-edges bounding-box "
"braille break break-all break-spaces break-word brightness( browser bullets butt button "
"calc-args( calc-name( call( cap cap-height capitalize caption ceil( cell center center-left center-right central "
"ch-width change( character-variant( checkbox child child( circle circle( clone close-quote coarse code col-resize "
"collapse collection "
"color( color-CBDT color-COLRv0 color-COLRv1 color-SVG color-burn color-contrast( color-dodge color-mix( color-sbix "
"column column-reverse common-ligatures compact compatible( complement( compress condensed conic-gradient( "
"content( content-box content-exists( contents context-menu contextual continuous contrast( contrast-color( convert( "
"copy counter( counters( cover create crisp-edges crispEdges crop cross cross-fade( crosshair css "
"cubic-bezier( currentColor cursive custom cyclic "
"dark darken darken( dashed dashes data-uri( "
"decimal decimal-leading-zero deep-merge( deep-remove( default( dense desaturate( device-cmyk( "
"diagonal-fractions difference difference( digits disc discard discard-after discard-before discretionary-ligatures div( "
"domain( dot dotted double double-circle down drop drop-shadow( "
"e-resize each( each-line ease ease-in ease-in-out ease-out economy element( ellipse( ellipsis "
"embed embed( embedded-opentype embossed emoji escape( evenodd ew-resize "
"ex ex-height exact exclude exclusion exclusion( expanded extends extra-condensed extra-expanded extract( "
"fade fade( fade-in( fade-out( fadein( fadeout( false fangsong fantasy far-left far-right fast faster "
"feature-aat feature-exists( feature-graphite feature-opentype female "
"fill-box filled fine first-baseline fit-content( fixed flat flex-end flex-start flip floor( flow-root "
"font-format( font-tech( footnote force force-end format( forwards fragments from from-font from-image "
"full-size-kana full-width function-exists( "
"gaps geometricPrecision georgian get( get-function( get-unit( global global-variable-exists( "
"grab grabbing grayscale( green( greyscale( groove "
"handheld hanging hard-light hardlight( has-key( help hidden hide high high-quality higher historical-ligatures "
"horizontal horizontal-tb hsl( hsla( hss-height hss-width hsv( hsva( hsvhue( hsvsaturation( hsvvalue( "
"hue hue( hue-rotate( hwb( "
"ic-height ic-width icon ideograph-alpha ideograph-numeric ideographic ideographic-ink ideographic-space ie-hex-str( if( "
"image( image-height( image-set( image-size( image-width( important in increment incremental index( infinite infinity "
"inherit initial initial-only inline inline-block inline-end inline-flex inline-grid inline-start inline-table inner "
"insert insert( inset( inset-area( inside inspect( int( inter-character inter-word interactive interlace intersect "
"invert invert( inverted is-bracketed( is-superselector( is-unitless( iscolor( isdefined( isem( iskeyword( isnumber( "
"isolate isolate-override ispercentage( ispixel( isruleset( isstring( isunit( isurl( italic "
"jis04 jis78 jis90 join( jump-both jump-end jump-none jump-start justify justify-all keep keep-all keys( keywords( "
"lab( landscape large larger last last-baseline layer( layout lch( "
"leader( leading left-side leftwards legacy length( less level light lighten lighten( lighter lightness( "
"line line-through linear linear-gradient( linearRGB lining-nums list list-item listbox literal-punctuation "
"load-css( local local( loose loud low lower lower-alpha lower-greek lower-latin lower-roman lowercase ltr "
"luma( luminance luminance( luminosity "
"male mandatory manipulation manual map margin-box "
"match-parent match-self match-source math mathematical matrix( matrix3d( max-content maximum "
"media( media-document( medium menu menulist menulist-button merge merge( message-box meta meter middle "
"min-color-index min-content min-monochrome minimal-ui minimum minmax( miter miter-clip mix mix( mixed mixin-exists( "
"moderate module-functions( module-variables( monospace more most-block-size most-height most-inline-size most-width "
"move multiple multiply multiply( "
"n-resize name( narrow ne-resize nearest negation( nest( nesw-resize neutral never nherit no-autospace "
"no-clip no-close-quote no-common-ligatures no-compress no-contextual no-discretionary-ligatures no-drop "
"no-historical-ligature no-limit no-open-quote no-overflow no-preference no-punctuation no-repeat nonzero normal "
"not not-allowed nowrap ns-resize nth( null numbers numeric nw-resize nwse-resize "
"objects oblique oklab( oklch( old oldstyle-nums once one only "
"opacity( opaque open-quote opentype optimizeLegibility optimizeQuality optimizeSpeed or ordinal ornaments( "
"outer outset outside outside-shape over overlay overlay( overline "
"p3 padding-box paged paginate paint painted palette-mix( palettes pan-down pan-left pan-right pan-up pan-x pan-y "
"parent parse( path( percentage( perceptual perspective( petite-caps pi pi( pinch-zoom pixelated plaintext "
"polygon( portrait "
"pre pre-line pre-wrap preserve preserve-3d preserve-breaks preserve-parent-color preserve-spaces pretty print "
"progress progress-bar progressive projection proportional-nums proportional-width proximity punctuation push-button "
"quote( "
"radial-gradient( radio raise random( range( ray( rec2020 rect rect( red( reduce reduced reference regexp( "
"relative relative-colorimetric remove( "
"repeat repeat-x repeat-y repeating-conic-gradient( repeating-linear-gradient( repeating-radial-gradient( "
"replace replace( reverse revert revert-layer rgb( rgba( ridge right-side rightwards "
"rotate( rotate-left rotate-right rotate3d( rotateX( rotateY( rotateZ( round row row-resize row-reverse rtl "
"ruby ruby-base ruby-base-container ruby-text ruby-text-container run-in running( "
"s-resize sRGB safe same sans-serif saturate( saturation saturation( "
"scale( scale-down scale3d( scaleX( scaleY( scaleZ( screen screen( scroll scroll( scroll-position se-resize searchfield "
"select( selector selector( self-end self-start semi-condensed semi-expanded separate separator( sepia( serif sesame "
"set( set-nth( shade( show sideways sideways-lr sideways-rl silent simple-selectors( simplified size( "
"skew( skewX( skewY( slash( slashed-zero slice slice( slider-horizontal slow slower "
"small small-caps small-caption smaller smooth snap snap-block snap-inline soft soft-light softlight( solid "
"space space-adjacent space-all space-around space-between space-end space-evenly space-first space-start spaces span "
"speech spell-out spin( spread square square-button srgb "
"stable stacked-fractions standalone standard start state static status-bar step-end step-start steps( sticky "
"stretch strict string string( stripes( stroke-box strong stupid style style( styleset( stylistic( "
"sub subgrid subtract subtractive super supports( svg svg-gradient( sw-resize swap swash( symbolic symbols( system-ui "
"table table-caption table-cell table-column table-column-group table-footer-group table-header-group "
"table-row table-row-group tabular-nums tactile target-counter( target-counters( target-text( "
"techn( text text-bottom text-top textarea textfield thick thin through tint( titling-caps "
"to to-lower-case( to-upper-case( traditional translate( translate3d( translateX( translateY( translateZ( "
"triangle trim-adjacent trim-all trim-auto trim-end trim-inner trim-start true truetype tty tv type( type-of( "
"ui-monospace ui-rounded ui-sans-serif ui-serif ultra-condensed ultra-expanded "
"under underline underscore unicase unicode unify( unique-id( unit( unquote( unsafe unset "
"up upper-alpha upper-latin upper-roman uppercase upright url( url-prefix( "
"values( var var( variable-exists( variations vertical vertical-lr vertical-rl vertical-text "
"view( view-box visible visibleFill visiblePainted visibleStroke visual "
"w-resize wait wavy weak weight whiteness( with woff woff2 words wrap wrap-reverse "
"x-fast x-high x-large x-loud x-low x-slow x-small x-soft x-strong x-weak xx-large xx-small xywh( young "
"zero-if-extrinsic zero-if-scroll zip( zoom-in zoom-out "

, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_CSS[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_CSS_AT_RULE, NP2StyleX_AtRule, L"fore:#FF8000" },
	{ SCE_CSS_TAG, NP2StyleX_HTMLTag, L"bold; fore:#0080FF" },
	{ SCE_CSS_CLASS, NP2StyleX_TagClass, L"fore:#7C5AF3" },
	{ SCE_CSS_ID, NP2StyleX_TagId, L"fore:#648000" },
	{ SCE_CSS_ATTRIBUTE, NP2StyleX_TagAttribute, L"italic; fore:#648000" },
	{ SCE_CSS_PROPERTY, NP2StyleX_Property, L"fore:#FF4000" },
	{ SCE_CSS_PSEUDOCLASS, NP2StyleX_PseudoClass, L"fore:#0066CC" },
	{ SCE_CSS_PSEUDOELEMENT, NP2StyleX_PseudoElement, L"fore:#0080C0" },
	{ SCE_CSS_UNKNOWN_PROPERTY, NP2StyleX_UnknownProperty, L"fore:#C80000" },
	{ SCE_CSS_UNKNOWN_PSEUDOCLASS, NP2StyleX_UnknownPseudoClass, L"fore:#C80000" },
	{ SCE_CSS_UNKNOWN_PSEUDOELEMENT, NP2StyleX_UnknownPseudoElement, L"fore:#C80000" },
	{ MULTI_STYLE(SCE_CSS_COMMENTLINE, SCE_CSS_COMMENTBLOCK, SCE_CSS_CDO_CDC, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ MULTI_STYLE(SCE_CSS_COMMENTLINEDOC, SCE_CSS_COMMENTBLOCKDOC, 0, 0), NP2StyleX_DocComment, L"fore:#408040" },
	{ MULTI_STYLE(SCE_CSS_STRING_SQ, SCE_CSS_STRING_DQ, SCE_CSS_URL, 0), NP2StyleX_String, L"fore:#008000" },
	{ SCE_CSS_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_CSS_PLACEHOLDER, NP2StyleX_Placeholder, L"fore:#8080FF" },
	{ SCE_CSS_FUNCTION, NP2StyleX_Function, L"fore:#A46000" },
	{ SCE_CSS_IMPORTANT, NP2StyleX_Important, L"bold; fore:#408040" },
	{ SCE_CSS_VALUE, NP2StyleX_Value, L"fore:#3A6EA5" },
	{ SCE_CSS_VARIABLE, NP2StyleX_Variable, L"italic; fore:#003CE6" },
	{ MULTI_STYLE(SCE_CSS_NUMBER, SCE_CSS_DIMENSION, SCE_CSS_UNICODE_RANGE, 0), NP2StyleX_Number, L"fore:#007F7F" },
	{ MULTI_STYLE(SCE_CSS_OPERATOR, SCE_CSS_OPERATOR2, 0, 0), NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexCSS = {
	SCLEX_CSS, NP2LEX_CSS,
//Settings++Autogenerated -- start of section automatically generated
		LexerAttr_TabAsSpaces |
		LexerAttr_NoGlobalTabSettings,
		TAB_WIDTH_2, INDENT_WIDTH_2,
		(1 << 0) | (1 << 1), // level1, level2
		0,
		'\\', SCE_CSS_ESCAPECHAR, 0,
		0,
		0, 0,
		SCE_CSS_OPERATOR, SCE_CSS_OPERATOR2
		, KeywordAttr32(0, KeywordAttr_PreSorted) // properties
		| KeywordAttr32(1, KeywordAttr_PreSorted) // at rules
		| KeywordAttr32(2, KeywordAttr_PreSorted) // pseudo classes
		| KeywordAttr32(3, KeywordAttr_PreSorted) // pseudo elements
		| KeywordAttr32(4, KeywordAttr_PreSorted) // math functions
		| KeywordAttr32(5, KeywordAttr_NoLexer) // color names
		| KeywordAttr32(6, KeywordAttr_NoLexer) // values
		, SCE_CSS_CDO_CDC,
		SCE_CSS_ESCAPECHAR, SCE_CSS_URL,
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"CSS Style Sheet", Styles_CSS),
	L"css; scss; less; hss; wxss",
	&Keywords_CSS,
	Styles_CSS
};
