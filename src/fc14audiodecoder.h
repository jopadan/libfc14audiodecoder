/* C language wrapper library for Future Composer audio decoder
 * Copyright (C) 2008 Michael Schwendt
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef FC14AUDIODECODER_H
#define FC14AUDIODECODER_H

#ifdef __cplusplus
extern "C" {
#endif

    /* Return ptr to new decoder object. */
    void* fc14dec_new();

    /* Delete decoder object. */
    void fc14dec_delete(void* decoder);

    /* Apply input format header check to a memory buffer containing
       at least 5 (optionally 6 or more) bytes. 
       Returns: boolean integer 1 = recognized data, 0 = unknown data */
    int fc14dec_detect(void* decoder, void* buffer, unsigned long int length);

    /* Initialize decoder with input data from a memory buffer.
       Input buffer may be freed as buffer contents are copied.
       Returns: boolean integer 1 = success, 0 = failure */
    int fc14dec_init(void* decoder, void* buffer, unsigned long int length);

    /* Restart an already initialized decoder.
       Returns: boolean integer 1 = success, 0 = not initialized yet */
    int fc14dec_restart(void* decoder);

    /* Initialize decoder's audio sample mixer.
       frequency : output sample frequency
       precision : bits per sample
       channels : 1=mono, 2=stereo
       zero : value of silent output sample
              (e.g. 0x80 for unsigned 8-bit, 0x0000 for signed 16-bit) */
    void fc14dec_mixer_init(void* decoder, int frequency, int precision,
                            int channels, int zero);

    /* Return 1 (true) if song end has been reached, else 0 (false). */
    int fc14dec_song_end(void* decoder);

    /* Return song duration in milli-seconds [ms].
       Decoder must be initialized and will be restarted afterwards. */
    unsigned long int fc14dec_duration(void* decoder);

    /* Set an initialized decoder's play position in milli-seconds [ms]. */
    void fc14dec_seek(void* decoder, long int ms);

    /* Return C-string describing the detected input data format. */
    const char* fc14dec_format_name(void* decoder);

    /* Fill output sample buffer with audio. */
    void fc14dec_buffer_fill(void* decoder, void* buffer, unsigned long int length);

#ifdef FC_API_EXT_1
    void fc14dec_mute_channel(void* ptr, bool mute, unsigned int channel);
    unsigned short int fc14dec_get_channel_volume(void* ptr, unsigned int channel);
    int fc14dec_get_used_patterns(void* decoder);
    int fc14dec_get_used_snd_mod_seqs(void* decoder);
    int fc14dec_get_used_vol_mod_seqs(void* decoder);
    int fc14dec_get_sample_length(void* decoder, unsigned int num);
    int fc14dec_get_sample_rep_offset(void* decoder, unsigned int num);
    int fc14dec_get_sample_rep_length(void* decoder, unsigned int num);
#endif

#ifdef __cplusplus
}
#endif

#endif  /* FC14AUDIODECODER_H */
