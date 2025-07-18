C language wrapper library for Future Composer audio decoding  
https://github.com/mschwendt/libfc14audiodecoder

This library provides a C API for an old audio decoder that has been used
in several plug-ins for versatile audio players like XMMS, BMP, Audacious
and GStreamer. It is based on unmaintained/stable code which used to be
a `Future Composer Reference Player for Linux'. Because of how the source
code has been imported into a CVS repository long since its last major
modification, the timestamps of the files in CVS and in released tarballs
do not reflect that the core of the decoder has not been changed for
years. Except for cosmetical adjustments, indentation, dropping of unused
pieces, and partial reorganization for OOP.


AMIGA Future Composer v1.0 - v1.4 music player

The original C++ based player has been written because most FC player
implementations (on AMIGA and/or PC) do not manage to play back all module
files without flaws. There is always at least one module that reveals a
minor or major bug during playback. If that happened with this particular
implementation, it would be very easy to fix the source code, whereas it
would be very difficult to fix an emulated MC680x0 machine code
binary-only player.

If you still encounter unexpected behaviour, please submit your bug report
at the following place: https://github.com/mschwendt/libfc14audiodecoder/issues

Implemented in 1997 by Michael Schwendt. Based
mainly on hand-written notes from 1990 which were made upon fixing a
variety of bugs in the original player source code which was released with
Future Composer. Much of the code outside the FC player implementation is
experimental, unfinished, simplified, and may contain hard-coded
definitions. Further, the code may contain unused functions and procedures
as well as inaccurate comments.

If you want to work on this code or derive your own player from it, feel
free to do so. This software is GPL'ed. If you don't know what that means,
have a look at the file ``COPYING''. Especially MOD player authors are
welcome to use this as an example on how to implement working FC support.
If you have any questions, ask.

Although this code does not claim it would be 100% compatible with each
and every FC music module available, it contains a variety of special
fixes for bugs and problems found in the original FC player source code as
well as in several derived versions. It has been tested with a lot of
music modules for quite a long time.

The terminology used in each source file differs from the documentation
that comes with the Future Composer editor. For instance, the ``pattern
SEQUENCER'' is called ``track table'' to not conflict with real pattern
administration variables. The ``FREQUENCE-Modulation'' sequence is called
``sound modulation'' sequence because it does not only affect the sample
period, but also the currently active sample.
Also, the ``VOLUME-Modulation'' sequence actually defines an instrument
and contains parameters which not only affect volume. It better ought to
be called ``instrument definition'' sequence. However, once the instrument
has been defined, the rest of the sequence does only do the volume
envelope.


SUPPORTED VERSIONS OF FUTURE COMPOSER

Future Composer v1.0 (SMOD)  (C) 1989 The Superions  
Future Composer v1.2 (SMOD)  
Future Composer v1.3 (SMOD)  
Future Composer v1.4 (FC14)  (C) 1990 by Supersero of The Superions  

Future Composer is based on a music routine by Jochen Hippel.


Screen-shots of Future Composer v1.4 main screen, pattern editor, and sound editor:
![](images/fc.png)![](images/fc_pattedit.png)![](images/fc_sndedit.png)
