/*
** FLTK specific PNG lib configuration file -- see README.bundled-libs.txt
**
** This file must be generated on Linux in a libpng distribution using:
**   $ ./configure --with-libpng-prefix=fltk_
**   $ make
** All lines including the 'fltk_' prefix must be upgraded with libpng.
*/

/* pnglibconf.h - library build configuration */

/* libpng version 1.6.40 */

/* Copyright (c) 2018-2023 Cosmin Truta */
/* Copyright (c) 1998-2002,2004,2006-2018 Glenn Randers-Pehrson */

/* This code is released under the libpng license. */
/* For conditions of distribution and use, see the disclaimer */
/* and license in png.h */

/* pnglibconf.h */
/* Machine generated file: DO NOT EDIT */
/* Derived from: scripts/pnglibconf.dfa */
#ifndef PNGLCONF_H
#define PNGLCONF_H
/* options */
#define PNG_16BIT_SUPPORTED
#define PNG_ALIGNED_MEMORY_SUPPORTED
/*#undef PNG_ARM_NEON_API_SUPPORTED*/
/*#undef PNG_ARM_NEON_CHECK_SUPPORTED*/
#define PNG_BENIGN_ERRORS_SUPPORTED
#define PNG_BENIGN_READ_ERRORS_SUPPORTED
/*#undef PNG_BENIGN_WRITE_ERRORS_SUPPORTED*/
#define PNG_BUILD_GRAYSCALE_PALETTE_SUPPORTED
#define PNG_CHECK_FOR_INVALID_INDEX_SUPPORTED
#define PNG_COLORSPACE_SUPPORTED
#define PNG_CONSOLE_IO_SUPPORTED
#define PNG_CONVERT_tIME_SUPPORTED
#define PNG_EASY_ACCESS_SUPPORTED
/*#undef PNG_ERROR_NUMBERS_SUPPORTED*/
#define PNG_ERROR_TEXT_SUPPORTED
#define PNG_FIXED_POINT_SUPPORTED
#define PNG_FLOATING_ARITHMETIC_SUPPORTED
#define PNG_FLOATING_POINT_SUPPORTED
#define PNG_FORMAT_AFIRST_SUPPORTED
#define PNG_FORMAT_BGR_SUPPORTED
#define PNG_GAMMA_SUPPORTED
#define PNG_GET_PALETTE_MAX_SUPPORTED
#define PNG_HANDLE_AS_UNKNOWN_SUPPORTED
#define PNG_INCH_CONVERSIONS_SUPPORTED
#define PNG_INFO_IMAGE_SUPPORTED
#define PNG_IO_STATE_SUPPORTED
#define PNG_MNG_FEATURES_SUPPORTED
#define PNG_POINTER_INDEXING_SUPPORTED
/*#undef PNG_POWERPC_VSX_API_SUPPORTED*/
/*#undef PNG_POWERPC_VSX_CHECK_SUPPORTED*/
#define PNG_PROGRESSIVE_READ_SUPPORTED
#define PNG_READ_16BIT_SUPPORTED
#define PNG_READ_ALPHA_MODE_SUPPORTED
#define PNG_READ_ANCILLARY_CHUNKS_SUPPORTED
#define PNG_READ_BACKGROUND_SUPPORTED
#define PNG_READ_BGR_SUPPORTED
#define PNG_READ_CHECK_FOR_INVALID_INDEX_SUPPORTED
#define PNG_READ_COMPOSITE_NODIV_SUPPORTED
#define PNG_READ_COMPRESSED_TEXT_SUPPORTED
#define PNG_READ_EXPAND_16_SUPPORTED
#define PNG_READ_EXPAND_SUPPORTED
#define PNG_READ_FILLER_SUPPORTED
#define PNG_READ_GAMMA_SUPPORTED
#define PNG_READ_GET_PALETTE_MAX_SUPPORTED
#define PNG_READ_GRAY_TO_RGB_SUPPORTED
#define PNG_READ_INTERLACING_SUPPORTED
#define PNG_READ_INT_FUNCTIONS_SUPPORTED
#define PNG_READ_INVERT_ALPHA_SUPPORTED
#define PNG_READ_INVERT_SUPPORTED
#define PNG_READ_OPT_PLTE_SUPPORTED
#define PNG_READ_PACKSWAP_SUPPORTED
#define PNG_READ_PACK_SUPPORTED
#define PNG_READ_QUANTIZE_SUPPORTED
#define PNG_READ_RGB_TO_GRAY_SUPPORTED
#define PNG_READ_SCALE_16_TO_8_SUPPORTED
#define PNG_READ_SHIFT_SUPPORTED
#define PNG_READ_STRIP_16_TO_8_SUPPORTED
#define PNG_READ_STRIP_ALPHA_SUPPORTED
#define PNG_READ_SUPPORTED
#define PNG_READ_SWAP_ALPHA_SUPPORTED
#define PNG_READ_SWAP_SUPPORTED
#define PNG_READ_TEXT_SUPPORTED
#define PNG_READ_TRANSFORMS_SUPPORTED
#define PNG_READ_UNKNOWN_CHUNKS_SUPPORTED
#define PNG_READ_USER_CHUNKS_SUPPORTED
#define PNG_READ_USER_TRANSFORM_SUPPORTED
#define PNG_READ_bKGD_SUPPORTED
#define PNG_READ_cHRM_SUPPORTED
#define PNG_READ_eXIf_SUPPORTED
#define PNG_READ_gAMA_SUPPORTED
#define PNG_READ_hIST_SUPPORTED
#define PNG_READ_iCCP_SUPPORTED
#define PNG_READ_iTXt_SUPPORTED
#define PNG_READ_oFFs_SUPPORTED
#define PNG_READ_pCAL_SUPPORTED
#define PNG_READ_pHYs_SUPPORTED
#define PNG_READ_sBIT_SUPPORTED
#define PNG_READ_sCAL_SUPPORTED
#define PNG_READ_sPLT_SUPPORTED
#define PNG_READ_sRGB_SUPPORTED
#define PNG_READ_tEXt_SUPPORTED
#define PNG_READ_tIME_SUPPORTED
#define PNG_READ_tRNS_SUPPORTED
#define PNG_READ_zTXt_SUPPORTED
#define PNG_SAVE_INT_32_SUPPORTED
#define PNG_SAVE_UNKNOWN_CHUNKS_SUPPORTED
#define PNG_SEQUENTIAL_READ_SUPPORTED
#define PNG_SETJMP_SUPPORTED
#define PNG_SET_OPTION_SUPPORTED
#define PNG_SET_UNKNOWN_CHUNKS_SUPPORTED
#define PNG_SET_USER_LIMITS_SUPPORTED
#define PNG_SIMPLIFIED_READ_AFIRST_SUPPORTED
#define PNG_SIMPLIFIED_READ_BGR_SUPPORTED
#define PNG_SIMPLIFIED_READ_SUPPORTED
#define PNG_SIMPLIFIED_WRITE_AFIRST_SUPPORTED
#define PNG_SIMPLIFIED_WRITE_BGR_SUPPORTED
#define PNG_SIMPLIFIED_WRITE_STDIO_SUPPORTED
#define PNG_SIMPLIFIED_WRITE_SUPPORTED
#define PNG_STDIO_SUPPORTED
#define PNG_STORE_UNKNOWN_CHUNKS_SUPPORTED
#define PNG_TEXT_SUPPORTED
#define PNG_TIME_RFC1123_SUPPORTED
#define PNG_UNKNOWN_CHUNKS_SUPPORTED
#define PNG_USER_CHUNKS_SUPPORTED
#define PNG_USER_LIMITS_SUPPORTED
#define PNG_USER_MEM_SUPPORTED
#define PNG_USER_TRANSFORM_INFO_SUPPORTED
#define PNG_USER_TRANSFORM_PTR_SUPPORTED
#define PNG_WARNINGS_SUPPORTED
#define PNG_WRITE_16BIT_SUPPORTED
#define PNG_WRITE_ANCILLARY_CHUNKS_SUPPORTED
#define PNG_WRITE_BGR_SUPPORTED
#define PNG_WRITE_CHECK_FOR_INVALID_INDEX_SUPPORTED
#define PNG_WRITE_COMPRESSED_TEXT_SUPPORTED
#define PNG_WRITE_CUSTOMIZE_COMPRESSION_SUPPORTED
#define PNG_WRITE_CUSTOMIZE_ZTXT_COMPRESSION_SUPPORTED
#define PNG_WRITE_FILLER_SUPPORTED
#define PNG_WRITE_FILTER_SUPPORTED
#define PNG_WRITE_FLUSH_SUPPORTED
#define PNG_WRITE_GET_PALETTE_MAX_SUPPORTED
#define PNG_WRITE_INTERLACING_SUPPORTED
#define PNG_WRITE_INT_FUNCTIONS_SUPPORTED
#define PNG_WRITE_INVERT_ALPHA_SUPPORTED
#define PNG_WRITE_INVERT_SUPPORTED
#define PNG_WRITE_OPTIMIZE_CMF_SUPPORTED
#define PNG_WRITE_PACKSWAP_SUPPORTED
#define PNG_WRITE_PACK_SUPPORTED
#define PNG_WRITE_SHIFT_SUPPORTED
#define PNG_WRITE_SUPPORTED
#define PNG_WRITE_SWAP_ALPHA_SUPPORTED
#define PNG_WRITE_SWAP_SUPPORTED
#define PNG_WRITE_TEXT_SUPPORTED
#define PNG_WRITE_TRANSFORMS_SUPPORTED
#define PNG_WRITE_UNKNOWN_CHUNKS_SUPPORTED
#define PNG_WRITE_USER_TRANSFORM_SUPPORTED
#define PNG_WRITE_WEIGHTED_FILTER_SUPPORTED
#define PNG_WRITE_bKGD_SUPPORTED
#define PNG_WRITE_cHRM_SUPPORTED
#define PNG_WRITE_eXIf_SUPPORTED
#define PNG_WRITE_gAMA_SUPPORTED
#define PNG_WRITE_hIST_SUPPORTED
#define PNG_WRITE_iCCP_SUPPORTED
#define PNG_WRITE_iTXt_SUPPORTED
#define PNG_WRITE_oFFs_SUPPORTED
#define PNG_WRITE_pCAL_SUPPORTED
#define PNG_WRITE_pHYs_SUPPORTED
#define PNG_WRITE_sBIT_SUPPORTED
#define PNG_WRITE_sCAL_SUPPORTED
#define PNG_WRITE_sPLT_SUPPORTED
#define PNG_WRITE_sRGB_SUPPORTED
#define PNG_WRITE_tEXt_SUPPORTED
#define PNG_WRITE_tIME_SUPPORTED
#define PNG_WRITE_tRNS_SUPPORTED
#define PNG_WRITE_zTXt_SUPPORTED
#define PNG_bKGD_SUPPORTED
#define PNG_cHRM_SUPPORTED
#define PNG_eXIf_SUPPORTED
#define PNG_gAMA_SUPPORTED
#define PNG_hIST_SUPPORTED
#define PNG_iCCP_SUPPORTED
#define PNG_iTXt_SUPPORTED
#define PNG_oFFs_SUPPORTED
#define PNG_pCAL_SUPPORTED
#define PNG_pHYs_SUPPORTED
#define PNG_sBIT_SUPPORTED
#define PNG_sCAL_SUPPORTED
#define PNG_sPLT_SUPPORTED
#define PNG_sRGB_SUPPORTED
#define PNG_tEXt_SUPPORTED
#define PNG_tIME_SUPPORTED
#define PNG_tRNS_SUPPORTED
#define PNG_zTXt_SUPPORTED
/* end of options */
/* settings */
#define PNG_API_RULE 0
#define PNG_DEFAULT_READ_MACROS 1
#define PNG_GAMMA_THRESHOLD_FIXED 5000
#define PNG_IDAT_READ_SIZE PNG_ZBUF_SIZE
#define PNG_INFLATE_BUF_SIZE 1024
#define PNG_LINKAGE_API extern
#define PNG_LINKAGE_CALLBACK extern
#define PNG_LINKAGE_DATA extern
#define PNG_LINKAGE_FUNCTION extern
#define PNG_MAX_GAMMA_8 11
#define PNG_PREFIX fltk_
#define PNG_QUANTIZE_BLUE_BITS 5
#define PNG_QUANTIZE_GREEN_BITS 5
#define PNG_QUANTIZE_RED_BITS 5
#define PNG_TEXT_Z_DEFAULT_COMPRESSION (-1)
#define PNG_TEXT_Z_DEFAULT_STRATEGY 0
#define PNG_USER_CHUNK_CACHE_MAX 1000
#define PNG_USER_CHUNK_MALLOC_MAX 8000000
#define PNG_USER_HEIGHT_MAX 1000000
#define PNG_USER_WIDTH_MAX 1000000
#define PNG_ZBUF_SIZE 8192
#define PNG_ZLIB_VERNUM 0x1300
#define PNG_Z_DEFAULT_COMPRESSION (-1)
#define PNG_Z_DEFAULT_NOFILTER_STRATEGY 0
#define PNG_Z_DEFAULT_STRATEGY 1
#define PNG_sCAL_PRECISION 5
#define PNG_sRGB_PROFILE_CHECKS 2
/* end of settings */
#define png_access_version_number fltk_png_access_version_number
#define png_benign_error fltk_png_benign_error
#define png_build_grayscale_palette fltk_png_build_grayscale_palette
#define png_calloc fltk_png_calloc
#define png_chunk_benign_error fltk_png_chunk_benign_error
#define png_chunk_error fltk_png_chunk_error
#define png_chunk_warning fltk_png_chunk_warning
#define png_convert_from_struct_tm fltk_png_convert_from_struct_tm
#define png_convert_from_time_t fltk_png_convert_from_time_t
#define png_convert_to_rfc1123 fltk_png_convert_to_rfc1123
#define png_convert_to_rfc1123_buffer fltk_png_convert_to_rfc1123_buffer
#define png_create_info_struct fltk_png_create_info_struct
#define png_create_read_struct fltk_png_create_read_struct
#define png_create_read_struct_2 fltk_png_create_read_struct_2
#define png_create_write_struct fltk_png_create_write_struct
#define png_create_write_struct_2 fltk_png_create_write_struct_2
#define png_data_freer fltk_png_data_freer
#define png_destroy_info_struct fltk_png_destroy_info_struct
#define png_destroy_read_struct fltk_png_destroy_read_struct
#define png_destroy_write_struct fltk_png_destroy_write_struct
#define png_error fltk_png_error
#define png_free fltk_png_free
#define png_free_data fltk_png_free_data
#define png_free_default fltk_png_free_default
#define png_get_IHDR fltk_png_get_IHDR
#define png_get_PLTE fltk_png_get_PLTE
#define png_get_bKGD fltk_png_get_bKGD
#define png_get_bit_depth fltk_png_get_bit_depth
#define png_get_cHRM fltk_png_get_cHRM
#define png_get_cHRM_XYZ fltk_png_get_cHRM_XYZ
#define png_get_cHRM_XYZ_fixed fltk_png_get_cHRM_XYZ_fixed
#define png_get_cHRM_fixed fltk_png_get_cHRM_fixed
#define png_get_channels fltk_png_get_channels
#define png_get_chunk_cache_max fltk_png_get_chunk_cache_max
#define png_get_chunk_malloc_max fltk_png_get_chunk_malloc_max
#define png_get_color_type fltk_png_get_color_type
#define png_get_compression_buffer_size fltk_png_get_compression_buffer_size
#define png_get_compression_type fltk_png_get_compression_type
#define png_get_copyright fltk_png_get_copyright
#define png_get_current_pass_number fltk_png_get_current_pass_number
#define png_get_current_row_number fltk_png_get_current_row_number
#define png_get_eXIf fltk_png_get_eXIf
#define png_get_eXIf_1 fltk_png_get_eXIf_1
#define png_get_error_ptr fltk_png_get_error_ptr
#define png_get_filter_type fltk_png_get_filter_type
#define png_get_gAMA fltk_png_get_gAMA
#define png_get_gAMA_fixed fltk_png_get_gAMA_fixed
#define png_get_hIST fltk_png_get_hIST
#define png_get_header_ver fltk_png_get_header_ver
#define png_get_header_version fltk_png_get_header_version
#define png_get_iCCP fltk_png_get_iCCP
#define png_get_image_height fltk_png_get_image_height
#define png_get_image_width fltk_png_get_image_width
#define png_get_int_32 fltk_png_get_int_32
#define png_get_interlace_type fltk_png_get_interlace_type
#define png_get_io_chunk_type fltk_png_get_io_chunk_type
#define png_get_io_ptr fltk_png_get_io_ptr
#define png_get_io_state fltk_png_get_io_state
#define png_get_libpng_ver fltk_png_get_libpng_ver
#define png_get_mem_ptr fltk_png_get_mem_ptr
#define png_get_oFFs fltk_png_get_oFFs
#define png_get_pCAL fltk_png_get_pCAL
#define png_get_pHYs fltk_png_get_pHYs
#define png_get_pHYs_dpi fltk_png_get_pHYs_dpi
#define png_get_palette_max fltk_png_get_palette_max
#define png_get_pixel_aspect_ratio fltk_png_get_pixel_aspect_ratio
#define png_get_pixel_aspect_ratio_fixed fltk_png_get_pixel_aspect_ratio_fixed
#define png_get_pixels_per_inch fltk_png_get_pixels_per_inch
#define png_get_pixels_per_meter fltk_png_get_pixels_per_meter
#define png_get_progressive_ptr fltk_png_get_progressive_ptr
#define png_get_rgb_to_gray_status fltk_png_get_rgb_to_gray_status
#define png_get_rowbytes fltk_png_get_rowbytes
#define png_get_rows fltk_png_get_rows
#define png_get_sBIT fltk_png_get_sBIT
#define png_get_sCAL fltk_png_get_sCAL
#define png_get_sCAL_fixed fltk_png_get_sCAL_fixed
#define png_get_sCAL_s fltk_png_get_sCAL_s
#define png_get_sPLT fltk_png_get_sPLT
#define png_get_sRGB fltk_png_get_sRGB
#define png_get_signature fltk_png_get_signature
#define png_get_tIME fltk_png_get_tIME
#define png_get_tRNS fltk_png_get_tRNS
#define png_get_text fltk_png_get_text
#define png_get_uint_16 fltk_png_get_uint_16
#define png_get_uint_31 fltk_png_get_uint_31
#define png_get_uint_32 fltk_png_get_uint_32
#define png_get_unknown_chunks fltk_png_get_unknown_chunks
#define png_get_user_chunk_ptr fltk_png_get_user_chunk_ptr
#define png_get_user_height_max fltk_png_get_user_height_max
#define png_get_user_transform_ptr fltk_png_get_user_transform_ptr
#define png_get_user_width_max fltk_png_get_user_width_max
#define png_get_valid fltk_png_get_valid
#define png_get_x_offset_inches fltk_png_get_x_offset_inches
#define png_get_x_offset_inches_fixed fltk_png_get_x_offset_inches_fixed
#define png_get_x_offset_microns fltk_png_get_x_offset_microns
#define png_get_x_offset_pixels fltk_png_get_x_offset_pixels
#define png_get_x_pixels_per_inch fltk_png_get_x_pixels_per_inch
#define png_get_x_pixels_per_meter fltk_png_get_x_pixels_per_meter
#define png_get_y_offset_inches fltk_png_get_y_offset_inches
#define png_get_y_offset_inches_fixed fltk_png_get_y_offset_inches_fixed
#define png_get_y_offset_microns fltk_png_get_y_offset_microns
#define png_get_y_offset_pixels fltk_png_get_y_offset_pixels
#define png_get_y_pixels_per_inch fltk_png_get_y_pixels_per_inch
#define png_get_y_pixels_per_meter fltk_png_get_y_pixels_per_meter
#define png_handle_as_unknown fltk_png_handle_as_unknown
#define png_image_begin_read_from_file fltk_png_image_begin_read_from_file
#define png_image_begin_read_from_memory fltk_png_image_begin_read_from_memory
#define png_image_begin_read_from_stdio fltk_png_image_begin_read_from_stdio
#define png_image_finish_read fltk_png_image_finish_read
#define png_image_free fltk_png_image_free
#define png_image_write_to_file fltk_png_image_write_to_file
#define png_image_write_to_memory fltk_png_image_write_to_memory
#define png_image_write_to_stdio fltk_png_image_write_to_stdio
#define png_info_init_3 fltk_png_info_init_3
#define png_init_io fltk_png_init_io
#define png_longjmp fltk_png_longjmp
#define png_malloc fltk_png_malloc
#define png_malloc_default fltk_png_malloc_default
#define png_malloc_warn fltk_png_malloc_warn
#define png_permit_mng_features fltk_png_permit_mng_features
#define png_process_data fltk_png_process_data
#define png_process_data_pause fltk_png_process_data_pause
#define png_process_data_skip fltk_png_process_data_skip
#define png_progressive_combine_row fltk_png_progressive_combine_row
#define png_read_end fltk_png_read_end
#define png_read_image fltk_png_read_image
#define png_read_info fltk_png_read_info
#define png_read_png fltk_png_read_png
#define png_read_row fltk_png_read_row
#define png_read_rows fltk_png_read_rows
#define png_read_update_info fltk_png_read_update_info
#define png_reset_zstream fltk_png_reset_zstream
#define png_save_int_32 fltk_png_save_int_32
#define png_save_uint_16 fltk_png_save_uint_16
#define png_save_uint_32 fltk_png_save_uint_32
#define png_set_IHDR fltk_png_set_IHDR
#define png_set_PLTE fltk_png_set_PLTE
#define png_set_add_alpha fltk_png_set_add_alpha
#define png_set_alpha_mode fltk_png_set_alpha_mode
#define png_set_alpha_mode_fixed fltk_png_set_alpha_mode_fixed
#define png_set_bKGD fltk_png_set_bKGD
#define png_set_background fltk_png_set_background
#define png_set_background_fixed fltk_png_set_background_fixed
#define png_set_benign_errors fltk_png_set_benign_errors
#define png_set_bgr fltk_png_set_bgr
#define png_set_cHRM fltk_png_set_cHRM
#define png_set_cHRM_XYZ fltk_png_set_cHRM_XYZ
#define png_set_cHRM_XYZ_fixed fltk_png_set_cHRM_XYZ_fixed
#define png_set_cHRM_fixed fltk_png_set_cHRM_fixed
#define png_set_check_for_invalid_index fltk_png_set_check_for_invalid_index
#define png_set_chunk_cache_max fltk_png_set_chunk_cache_max
#define png_set_chunk_malloc_max fltk_png_set_chunk_malloc_max
#define png_set_compression_buffer_size fltk_png_set_compression_buffer_size
#define png_set_compression_level fltk_png_set_compression_level
#define png_set_compression_mem_level fltk_png_set_compression_mem_level
#define png_set_compression_method fltk_png_set_compression_method
#define png_set_compression_strategy fltk_png_set_compression_strategy
#define png_set_compression_window_bits fltk_png_set_compression_window_bits
#define png_set_crc_action fltk_png_set_crc_action
#define png_set_eXIf fltk_png_set_eXIf
#define png_set_eXIf_1 fltk_png_set_eXIf_1
#define png_set_error_fn fltk_png_set_error_fn
#define png_set_expand fltk_png_set_expand
#define png_set_expand_16 fltk_png_set_expand_16
#define png_set_expand_gray_1_2_4_to_8 fltk_png_set_expand_gray_1_2_4_to_8
#define png_set_filler fltk_png_set_filler
#define png_set_filter fltk_png_set_filter
#define png_set_filter_heuristics fltk_png_set_filter_heuristics
#define png_set_filter_heuristics_fixed fltk_png_set_filter_heuristics_fixed
#define png_set_flush fltk_png_set_flush
#define png_set_gAMA fltk_png_set_gAMA
#define png_set_gAMA_fixed fltk_png_set_gAMA_fixed
#define png_set_gamma fltk_png_set_gamma
#define png_set_gamma_fixed fltk_png_set_gamma_fixed
#define png_set_gray_to_rgb fltk_png_set_gray_to_rgb
#define png_set_hIST fltk_png_set_hIST
#define png_set_iCCP fltk_png_set_iCCP
#define png_set_interlace_handling fltk_png_set_interlace_handling
#define png_set_invalid fltk_png_set_invalid
#define png_set_invert_alpha fltk_png_set_invert_alpha
#define png_set_invert_mono fltk_png_set_invert_mono
#define png_set_keep_unknown_chunks fltk_png_set_keep_unknown_chunks
#define png_set_longjmp_fn fltk_png_set_longjmp_fn
#define png_set_mem_fn fltk_png_set_mem_fn
#define png_set_oFFs fltk_png_set_oFFs
#define png_set_option fltk_png_set_option
#define png_set_pCAL fltk_png_set_pCAL
#define png_set_pHYs fltk_png_set_pHYs
#define png_set_packing fltk_png_set_packing
#define png_set_packswap fltk_png_set_packswap
#define png_set_palette_to_rgb fltk_png_set_palette_to_rgb
#define png_set_progressive_read_fn fltk_png_set_progressive_read_fn
#define png_set_quantize fltk_png_set_quantize
#define png_set_read_fn fltk_png_set_read_fn
#define png_set_read_status_fn fltk_png_set_read_status_fn
#define png_set_read_user_chunk_fn fltk_png_set_read_user_chunk_fn
#define png_set_read_user_transform_fn fltk_png_set_read_user_transform_fn
#define png_set_rgb_to_gray fltk_png_set_rgb_to_gray
#define png_set_rgb_to_gray_fixed fltk_png_set_rgb_to_gray_fixed
#define png_set_rows fltk_png_set_rows
#define png_set_sBIT fltk_png_set_sBIT
#define png_set_sCAL fltk_png_set_sCAL
#define png_set_sCAL_fixed fltk_png_set_sCAL_fixed
#define png_set_sCAL_s fltk_png_set_sCAL_s
#define png_set_sPLT fltk_png_set_sPLT
#define png_set_sRGB fltk_png_set_sRGB
#define png_set_sRGB_gAMA_and_cHRM fltk_png_set_sRGB_gAMA_and_cHRM
#define png_set_scale_16 fltk_png_set_scale_16
#define png_set_shift fltk_png_set_shift
#define png_set_sig_bytes fltk_png_set_sig_bytes
#define png_set_strip_16 fltk_png_set_strip_16
#define png_set_strip_alpha fltk_png_set_strip_alpha
#define png_set_swap fltk_png_set_swap
#define png_set_swap_alpha fltk_png_set_swap_alpha
#define png_set_tIME fltk_png_set_tIME
#define png_set_tRNS fltk_png_set_tRNS
#define png_set_tRNS_to_alpha fltk_png_set_tRNS_to_alpha
#define png_set_text fltk_png_set_text
#define png_set_text_compression_level fltk_png_set_text_compression_level
#define png_set_text_compression_mem_level fltk_png_set_text_compression_mem_level
#define png_set_text_compression_method fltk_png_set_text_compression_method
#define png_set_text_compression_strategy fltk_png_set_text_compression_strategy
#define png_set_text_compression_window_bits fltk_png_set_text_compression_window_bits
#define png_set_unknown_chunk_location fltk_png_set_unknown_chunk_location
#define png_set_unknown_chunks fltk_png_set_unknown_chunks
#define png_set_user_limits fltk_png_set_user_limits
#define png_set_user_transform_info fltk_png_set_user_transform_info
#define png_set_write_fn fltk_png_set_write_fn
#define png_set_write_status_fn fltk_png_set_write_status_fn
#define png_set_write_user_transform_fn fltk_png_set_write_user_transform_fn
#define png_sig_cmp fltk_png_sig_cmp
#define png_start_read_image fltk_png_start_read_image
#define png_warning fltk_png_warning
#define png_write_chunk fltk_png_write_chunk
#define png_write_chunk_data fltk_png_write_chunk_data
#define png_write_chunk_end fltk_png_write_chunk_end
#define png_write_chunk_start fltk_png_write_chunk_start
#define png_write_end fltk_png_write_end
#define png_write_flush fltk_png_write_flush
#define png_write_image fltk_png_write_image
#define png_write_info fltk_png_write_info
#define png_write_info_before_PLTE fltk_png_write_info_before_PLTE
#define png_write_png fltk_png_write_png
#define png_write_row fltk_png_write_row
#define png_write_rows fltk_png_write_rows
#define png_write_sig fltk_png_write_sig
#define fltk_png_get_uint_32(buf) PNG_get_uint_32(buf)
#define fltk_png_get_uint_16(buf) PNG_get_uint_16(buf)
#define fltk_png_get_int_32(buf) PNG_get_int_32(buf)
#endif /* PNGLCONF_H */
