
/* ==== FUN_004307f0 @ 004307f0 ==== 
 * signature: undefined __fastcall FUN_004307f0(int * param_1)
 * body: 004307f0-00430852
 */

void __fastcall FUN_004307f0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_004a80f0(*param_1 * 0xf0 + DAT_00715e50);
  if ((0x7f < uVar2 >> 0x18) && ((*(byte *)(*param_1 * 0xf0 + 0x1c + DAT_00715e50) & 8) != 0)) {
    uVar3 = FUN_004b03e0(*param_1);
    if ((char)uVar3 == '\x01') {
      puVar1 = (uint *)(*param_1 * 0xf0 + 0x1c + DAT_00715e50);
      *puVar1 = *puVar1 ^ 8;
    }
  }
  return;
}


