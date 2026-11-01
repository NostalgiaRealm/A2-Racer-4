
/* ==== FUN_0041ed30 @ 0041ed30 ==== 
 * signature: undefined4 __cdecl FUN_0041ed30(int param_1)
 * body: 0041ed30-0041ed5b;0041ed5f-0041eea5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041ed5c-0041ed5e
 */

undefined4 __cdecl FUN_0041ed30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  
  iVar1 = FUN_0040dad0(param_1);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____No_FSM_object_refers_to_00594d64);
  }
  uVar2 = FUN_00419450(param_1);
  if ((char)uVar2 == '\x01') {
    pfVar3 = (float *)(&DAT_005ceab0 + iVar1 * 0x294);
    fVar5 = FUN_004a6800(0x7128b0);
    *pfVar3 = (float)(fVar5 + (float10)*pfVar3);
  }
  else {
    pfVar3 = (float *)(&DAT_005ceab0 + iVar1 * 0x294);
    *pfVar3 = 0.0;
  }
  if (0.25 < *pfVar3) {
    FUN_004c3fa0((byte *)s_Supercop_has_been_corrected__00594d98);
    FUN_0040e5a0(param_1,*(undefined4 **)(param_1 * 0xf0 + 0x34 + DAT_00715e50),'\0');
  }
  iVar4 = param_1 * 0xf0;
  *(uint *)(iVar4 + 0x1c + DAT_00715e50) = *(uint *)(iVar4 + 0x1c + DAT_00715e50) | 2;
  *(code **)(iVar4 + 0x70 + DAT_00715e50) = FUN_0042d820;
  if (DAT_005d3110 == '\0') {
    FUN_0040d490(iVar1);
    FUN_00412570(iVar1);
  }
  if (DAT_005d3110 == '\x01') {
    iVar1 = iVar4 + DAT_00715e50;
    fVar5 = FUN_004a6800(0x7128b0);
    *(float *)(iVar1 + 0xc4) =
         (float)((float10)*(float *)(iVar1 + 0xc4) -
                fVar5 * (float10)*(float *)(iVar1 + 0xc4) * (float10)5.0);
    iVar1 = iVar4 + DAT_00715e50;
    fVar5 = FUN_004a6800(0x7128b0);
    *(float *)(iVar1 + 0xbc) =
         (float)((float10)*(float *)(iVar1 + 0xbc) -
                fVar5 * (float10)*(float *)(iVar1 + 0xbc) * (float10)5.0);
    iVar4 = iVar4 + DAT_00715e50;
    fVar5 = FUN_004a6800(0x7128b0);
    *(float *)(iVar4 + 0xcc) =
         (float)((float10)*(float *)(iVar4 + 0xcc) -
                fVar5 * (float10)*(float *)(iVar4 + 0xcc) * (float10)5.0);
  }
  return 0;
}


