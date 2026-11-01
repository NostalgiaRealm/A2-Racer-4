
/* ==== FUN_00402ef8 @ 00402ef8 ==== 
 * signature: undefined1 __register FUN_00402ef8(int param_1, int param_2)
 * body: 00402ef8-00402f1e
 */

undefined1 FUN_00402ef8(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  
  sVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (uint)**(byte **)(param_1 + -0x2c);
    if (uVar1 == *(uint *)(param_2 + -4)) {
      do {
        sVar2 = (((*(byte **)(param_1 + -0x2c))[uVar1] ^ *(byte *)(param_2 + -1 + uVar1)) & 0xdf) *
                0x100;
        if ((char)((ushort)sVar2 >> 8) != '\0') goto LAB_00402f1b;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
      sVar2 = sVar2 + 1;
    }
  }
LAB_00402f1b:
  return (char)sVar2;
}


