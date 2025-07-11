// The soundtrack modules from the game "Chambers of Shaolin"
// as included with Future Composer v1.2 and v1.3 in SMOD format
// are broken, but have been copied into many module collections.
//
// As to fix them on-the-fly in memory, original data from Jochen
// Hippel's TFMX modules can only be copied, if it doesn't do
// effects like portamento (which differs from Future Composer).
// In other cases, an approximate conversion to FC format is done.

// Fix "SMOD.Chambers_of_Shaolin_1" (aka "Garden of the Abbot of Shaolin").
// Multiple patterns sound odd compared with the original TFMX modules.
// Only those without portamento can be copied directly, because FC differs
// entirely from TFMX in how it does portamento.
bool LiveFixShaolin1 = false;
if ( !LiveFixShaolin1 ) {
    const ubyte pattOrig07[PATTERN_LENGTH] = {
        0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x05,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x05,0x00,0x00,0x18,0x05,0x00,0x00,
        0x0c,0x18,0x00,0x00,0x18,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x03,0x00,0x00,0x10,0x05,0x00,0x00
    };
    const ubyte pattOrig0c[PATTERN_LENGTH] = {
        0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x05,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x05,0x00,0x00,0x18,0x05,0x00,0x00,
        0x0e,0x18,0x00,0x00,0x1a,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x05,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x03,0x00,0x00,0x0e,0x05,0x00,0x00
    };
    const ubyte pattOrig0d[PATTERN_LENGTH] = {
        0x19,0x00,0x00,0x00,0x1b,0x00,0x00,0x00,0x1e,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
        0x22,0x00,0x00,0x00,0x25,0x00,0x00,0x00,0x27,0x00,0x00,0x00,0x2a,0x00,0x00,0x00,
        0x2c,0x00,0x00,0x00,0x2e,0x00,0x00,0x00,0x31,0x00,0x00,0x00,0x33,0x00,0x00,0x00,
        0x36,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x3a,0x00,0x00,0x00,0x3d,0x00,0x00,0x00
    };
    const ubyte pattOrig10[PATTERN_LENGTH] = {
        0x19,0x00,0x00,0x00,0x1b,0x05,0x00,0x00,0x1e,0x00,0x00,0x00,0x20,0x05,0x00,0x00,
        0x22,0x00,0x00,0x00,0x25,0x05,0x00,0x00,0x27,0x00,0x00,0x00,0x2a,0x05,0x00,0x00,
        0x2c,0x00,0x00,0x00,0x2e,0x05,0x00,0x00,0x31,0x00,0x00,0x00,0x33,0x05,0x00,0x00,
        0x36,0x00,0x00,0x00,0x38,0x05,0x00,0x00,0x3a,0x00,0x00,0x00,0x3d,0x05,0x00,0x00
    };
    const ubyte pattOrig28[PATTERN_LENGTH] = {
        0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x0c,0x05,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,
        0x00,0x00,0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,
        0x00,0x00,0x0c,0x03,0x00,0x00,0x0c,0x05,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00
    };
    const ubyte pattOrig29[PATTERN_LENGTH] = {
        0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x0c,0x05,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,
        0x00,0x00,0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,
        0x00,0x00,0x0c,0x03,0x00,0x00,0x0c,0x05,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00
    };
    const ubyte pattOrig2b[PATTERN_LENGTH] = {
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x18,0x01,0x1d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    };
    const ubyte pattOrig2e[PATTERN_LENGTH] = {
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x24,0x01,0x24,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x1d,0x00,
        0x00,0x00,0x1f,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,0x1b,0x00,0x00,0x00,0x18,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    };
    const ubyte pattOrig37[PATTERN_LENGTH] = {
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x03,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x03
    };
    const ubyte pattOrig39[PATTERN_LENGTH] = {
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x1d,0x01,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    };
    const ubyte pattOrig40[PATTERN_LENGTH] = {
        0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,0x00,0x00,0x00,0x00,
        0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,
        0x0c,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,
        0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,0x0c,0x04,0x00,0x00
    };
    const ubyte pattOrig75[PATTERN_LENGTH] = {
        0x27,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,
        0x24,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,
        0x22,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,0x1b,0x00,0x00,0x00,0x18,0x00,0x00,0x00,
        0x1d,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x16,0x00,0x00,0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX07[PATTERN_LENGTH] = {
        0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x05,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x05,0x00,0x00,0x18,0x05,0x00,0x00,
        0x0c,0x18,0x00,0x00,0x18,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x03,0x10,0x05,0x13,0x03,0x13,0x05
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX0c[PATTERN_LENGTH] = {
        0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x05,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x05,0x00,0x00,0x18,0x05,0x00,0x00,
        0x0e,0x18,0x00,0x00,0x1a,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x05,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x03,0x0e,0x05,0x0e,0x03,0x0e,0x05
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX0d[PATTERN_LENGTH] = {
        0x19,0x00,0x1b,0x00,0x1e,0x00,0x20,0x00,0x22,0x00,0x25,0x00,0x27,0x00,0x2a,0x00,
        0x2c,0x00,0x2e,0x00,0x31,0x00,0x33,0x00,0x36,0x00,0x38,0x00,0x3a,0x00,0x3d,0x00,
        0x3f,0x00,0x42,0x00,0x3f,0x00,0x3d,0x00,0x3a,0x00,0x38,0x00,0x33,0x00,0x36,0x00,
        0x31,0x00,0x2e,0x00,0x2c,0x00,0x2a,0x00,0x27,0x00,0x25,0x00,0x22,0x00,0x20,0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX10[PATTERN_LENGTH] = {
        0x19,0x00,0x1b,0x05,0x1e,0x00,0x20,0x05,0x22,0x00,0x25,0x05,0x27,0x00,0x2a,0x05,
        0x2c,0x00,0x2e,0x05,0x31,0x00,0x33,0x05,0x36,0x00,0x38,0x05,0x3a,0x00,0x3d,0x05,
        0x3f,0x00,0x42,0x05,0x3f,0x00,0x3d,0x05,0x3a,0x00,0x38,0x05,0x33,0x00,0x36,0x05,
        0x31,0x00,0x2e,0x05,0x2c,0x00,0x2a,0x05,0x27,0x00,0x25,0x05,0x22,0x00,0x20,0x05
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX28[PATTERN_LENGTH] = {
        0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,0x00,0x00,
        0x0c,0x03,0x0c,0x05,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,0x00,0x00,
        0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,0x00,0x00,
        0x0c,0x03,0x0c,0x05,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x00,0x00,0x00,0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX29[PATTERN_LENGTH] = {
        0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,0x00,0x00,
        0x0c,0x03,0x0c,0x05,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,0x00,0x00,
        0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x05,0x00,0x00,
        0x0c,0x03,0x0c,0x05,0x00,0x00,0x00,0x00,0x0c,0x05,0x00,0x00,0x0c,0x03,0x00,0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX2b[PATTERN_LENGTH] = {
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x18,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x1d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX2e[PATTERN_LENGTH] = {
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x24,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x24,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,
        0x1f,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,0x1b,0x00,0x00,0x00,0x18,0x00,0x00,0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX37[PATTERN_LENGTH] = {
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
        0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x03,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
        0x0c,0x03,0x0c,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x03,0x00,0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX39[PATTERN_LENGTH] = {
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x1d,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX40[PATTERN_LENGTH] = {
        0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,0x00,0x00,0x00,0x00,
        0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,
        0x0c,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x02,0x00,0x00,0x0c,0x02,0x00,0x00,
        0x0c,0x02,0x00,0x00,0x0c,0x02,0x0c,0x02,0x0c,0x04,0x00,0x00,0x0c,0x02,0x00,0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX75[PATTERN_LENGTH] = {
        0x27,0x00,0x24,0x00,0x22,0x00,0x1d,0x00,0x24,0x00,0x22,0x00,0x1d,0x00,0x1a,0x00,
        0x22,0x00,0x1d,0x00,0x1b,0x00,0x18,0x00,0x1d,0x00,0x1a,0x00,0x18,0x00,0x16,0x00,
        0x1a,0x00,0x16,0x00,0x11,0x00,0x0e,0x00,0x16,0x00,0x11,0x00,0x0e,0x00,0x0a,0x00,
        0x11,0x00,0x0e,0x00,0x0a,0x00,0x05,0x00,0x0e,0x00,0x0a,0x00,0x05,0x00,0x02,0x00
    };
    if ( havePattern(0x07,pattOrig07) && havePattern(0x0c,pattOrig0c) &&
         havePattern(0x0d,pattOrig0d) && havePattern(0x10,pattOrig10) &&
         havePattern(0x28,pattOrig28) && havePattern(0x29,pattOrig29) &&
         havePattern(0x2b,pattOrig2b) && havePattern(0x2e,pattOrig2e) &&
         havePattern(0x37,pattOrig37) && havePattern(0x39,pattOrig39) &&
         havePattern(0x40,pattOrig40) && havePattern(0x75,pattOrig75) ) {
        replacePattern(0x07,pattTFMX07);
        replacePattern(0x0c,pattTFMX0c);
        replacePattern(0x0d,pattTFMX0d);
        replacePattern(0x10,pattTFMX10);
        replacePattern(0x28,pattTFMX28);
        replacePattern(0x29,pattTFMX29);
        replacePattern(0x2b,pattTFMX2b);
        replacePattern(0x2e,pattTFMX2e);
        replacePattern(0x37,pattTFMX37);
        replacePattern(0x39,pattTFMX39);
        replacePattern(0x40,pattTFMX40);
        replacePattern(0x75,pattTFMX75);
        LiveFixShaolin1 = true;  // as to reuse this
#ifdef DEBUG
        cout << "FIX APPLIED: Chambers of Shaolin 1" << endl;
#endif
    }
}

// Fix "SMOD.Chambers_of_Shaolin_2" (aka "Test of the Stick").
// Also included in "fcm.shaolin.2-4" and "mod.shaolin.2-4".
//
// The drums in various patterns are misplaced! Correcting the pattern
// data is strictly required as to make it sound right. There is
// nothing else a FC player could do about it.
bool LiveFixShaolin2 = false;
if ( !LiveFixShaolin2 ) {
    const ubyte pattOrig02[PATTERN_LENGTH] = {
        0x0c, 0x01, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00,
        0x0c, 0x03, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00,
        0x0c, 0x01, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00,
        0x0c, 0x01, 0x00, 0x00, 0x0c, 0x03, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x03, 0x00, 0x00
    };
    const ubyte pattOrig07[PATTERN_LENGTH] = {
        0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x0c, 0x02, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00,
        0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00
    };
    const ubyte pattOrig08[PATTERN_LENGTH] = {
        0x0c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02,
        0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x0a,
        0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02
    };
    const ubyte pattOrig18[PATTERN_LENGTH] = {
        0x0c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02,
        0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x13, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX02[PATTERN_LENGTH] = {
        0x0c, 0x01, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00,
        0x0c, 0x03, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00,
        0x0c, 0x01, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x01, 0x0c, 0x01, 0x0c, 0x01, 0x00, 0x00,
        0x0c, 0x03, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x03, 0x00, 0x00, 0x0c, 0x03, 0x0c, 0x03
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX07[PATTERN_LENGTH] = {
        0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x0c, 0x02, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00,
        0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x0c, 0x02, 0x13, 0x03, 0x00, 0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX08[PATTERN_LENGTH] = {
        0x0c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x0c, 0x02, 0x00, 0x00,
        0x0c, 0x02, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00,
        0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x0c, 0x02, 0x0c, 0x03, 0x00, 0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX18[PATTERN_LENGTH] = {
        0x0c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x0c, 0x02, 0x00, 0x00,
        0x0c, 0x02, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00
    };
    if ( havePattern(0x2,pattOrig02) && havePattern(0x7,pattOrig07) &&
         havePattern(0x8,pattOrig08) && havePattern(0x18,pattOrig18) ) {
        replacePattern(0x02,pattTFMX02);
        replacePattern(0x07,pattTFMX07);
        replacePattern(0x08,pattTFMX08);
        replacePattern(0x18,pattTFMX18);
        LiveFixShaolin2 = true;  // as to reuse this
#ifdef DEBUG
        cout << "FIX APPLIED: Chambers of Shaolin 2" << endl;
#endif
    }
}

// Fix "SMOD.Chambers_of_Shaolin_3" (aka "Test of Fire").
// Also included in "fcm.shaolin.2-4" and "mod.shaolin.2-4".
//
// The drums in pattern 0x24 are misplaced! Correcting the pattern
// data is strictly required as to make it sound right. There is
// nothing else a FC player could do about it.
bool LiveFixShaolin3 = false;
if ( !LiveFixShaolin3 ) {
    const ubyte pattOrig24[PATTERN_LENGTH] = {
        0x0c, 0x01, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x18, 0x0c, 0x00, 0x00,
        0x0c, 0x0c, 0x00, 0x00, 0x0a, 0x03, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x0a, 0x01, 0x00, 0x00,
        0x0a, 0x0c, 0x00, 0x00, 0x0f, 0x0c, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x11, 0x0c, 0x00, 0x00,
        0x0c, 0x0c, 0x00, 0x00, 0x13, 0x0c, 0x00, 0x00, 0x14, 0x03, 0x00, 0x00, 0x14, 0x0c, 0x00, 0x00
    };
    // alternative fix
    const ubyte pattFixed24[PATTERN_LENGTH] = {
        0x0c, 0x01, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x18, 0x0c, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00,
        0x0a, 0x03, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x0a, 0x01, 0x00, 0x00, 0x0f, 0x0c, 0x00, 0x00,
        0x0c, 0x0c, 0x00, 0x00, 0x11, 0x0c, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x13, 0x0c, 0x00, 0x00,
        0x14, 0x03, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x11, 0x0c, 0x00, 0x00, 0x0f, 0x0c, 0x00, 0x00
    };
    // copied from Jochen Hippel's TFMX module
    const ubyte pattTFMX24[PATTERN_LENGTH] = {
        0x0c, 0x01, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x18, 0x0c, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00,
        0x0a, 0x03, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x0a, 0x01, 0x0a, 0x0c, 0x0f, 0x0c, 0x00, 0x00,
        0x0c, 0x0c, 0x00, 0x00, 0x11, 0x0c, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x13, 0x0c, 0x00, 0x00,
        0x14, 0x03, 0x14, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x11, 0x0c, 0x00, 0x00, 0x0f, 0x0c, 0x0f, 0x0c
    };
    if ( havePattern(0x24,pattOrig24) ) {
        replacePattern(0x24,pattTFMX24);
        LiveFixShaolin3 = true;  // as to reuse this below
#ifdef DEBUG
        cout << "FIX APPLIED: Chambers of Shaolin 3" << endl;
#endif
    }
}
// The data in this pattern make no sense:
//  - instrument 0x28 (0x20+ST(8)) is empty,
//    and actually instruments 0x18 to 0x29 are empty
//  - the value 0x8c looks misplaced, because notes are 7-bit values
//  - whereas the original soundtrack activates portamento in this pattern,
//    portamento is completely missing here
if ( LiveFixShaolin3 ) {
    const ubyte pattOrig[PATTERN_LENGTH] = {
        0x0a, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
    const ubyte pattFixed[PATTERN_LENGTH] = {
        0x09, 0x80, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
    if ( havePattern(0x25,pattOrig) ) {
        replacePattern(0x25,pattFixed);
#ifdef DEBUG
        cout << "FIX APPLIED: Chambers of Shaolin 3" << endl;
#endif
    }
}

// FIX "SMOD.Chambers_of_Shaolin_5" (aka "Test of Balance").
// Also included in "fcm.shaolin.5-6" and "mod.shaolin.5-6".
//
// What happens here is that at step 0x33 of the track table, the third
// channel not only changes to an empty pattern (which is not used anywhere
// else) but also resets transpose from 0xef to 0, which is audibly wrong.
// Since such a change of PT/TR is legal, the player cannot ignore it
// without breaking compatibility with other SMOD/FC14 modules.
bool LiveFixShaolin5 = false;
if ( !LiveFixShaolin5 ) {
    const ubyte pattOrig1a[PATTERN_LENGTH] = {
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    };
    const ubyte pattFixed1a[PATTERN_LENGTH] = {
  0x2a,0x20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x10
    };
    const ubyte pattOrig17[PATTERN_LENGTH] = {
     0x24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    };
    if ( havePattern(0x1a,pattOrig1a) && havePattern(0x17,pattOrig17) ) {

        const int t = 2*TRACKTAB_ENTRY_LENGTH;
        const ubyte trackTabOrig[t] = {
            0x12, 0x0c, 0x04, 0x14, 0xf4, 0x00, 0x1a, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00,
            0x16, 0x0c, 0x04, 0x15, 0xf4, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00
        };
        const ubyte trackTabFixed[t] = {
            0x12, 0x0c, 0x04, 0x14, 0xf4, 0x00, 0x17, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00,
            0x16, 0x0c, 0x04, 0x15, 0xf4, 0x00, 0x00, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00
        };
        udword trackTabPos = _admin.offsets.trackTable+(0x33*TRACKTAB_ENTRY_LENGTH);
        if ( memcmp(input+trackTabPos,&trackTabOrig,t) == 0 ) {
            // Replace the bad/dubious track table entries.
            memcpy(input+trackTabPos,&trackTabFixed,t);
#ifdef DEBUG
            cout << "FIX APPLIED: Chambers of Shaolin 5" << endl;
#endif
        }
    }
}
