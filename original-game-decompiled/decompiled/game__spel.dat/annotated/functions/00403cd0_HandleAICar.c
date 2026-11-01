
/* ==== HandleAICar @ 00403cd0 ==== 
 * signature: undefined __cdecl HandleAICar(int param_1)
 * body: 00403cd0-00403cf4;00403cf8-00403dec
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to HandleAICar function']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00403cf5-00403cf7
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to HandleAICar function'] */

void __cdecl HandleAICar(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar3 = param_1 * 0x294;
    iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
    if (0.0 < *(float *)(&DAT_005cea5c + iVar3)) {
      iVar2 = iVar1 * 0xf0 + DAT_00715e50;
      fVar4 = FUN_004a6800(0x7128b0);
      *(float *)(iVar2 + 0xbc) =
           (float)((float10)*(float *)(iVar2 + 0xbc) -
                  fVar4 * (float10)*(float *)(iVar2 + 0xbc) * (float10)0.25);
      iVar2 = iVar1 * 0xf0 + DAT_00715e50;
      fVar4 = FUN_004a6800(0x7128b0);
      fVar4 = fVar4 * (float10)*(float *)(iVar2 + 0xcc);
      *(float *)(iVar2 + 0xcc) = (float)((float10)*(float *)(iVar2 + 0xcc) - (fVar4 + fVar4));
      fVar4 = FUN_004a6800(0x7128b0);
      *(float *)(&DAT_005cea5c + iVar3) =
           (float)((float10)*(float *)(&DAT_005cea5c + iVar3) - fVar4);
    }
    else {
      FUN_00427b90(iVar1,(float *)(&DAT_005cea7c + iVar3));
    }
    if ((((param_1 < 0x12) || (0x12 < param_1)) && ((&DAT_005ce9ec)[param_1 * 0xa5] != 10)) &&
       (*(float *)(iVar1 * 0xf0 + 0xc4 + DAT_00715e50) < 0.0)) {
      *(undefined4 *)(iVar1 * 0xf0 + 0xc4 + DAT_00715e50) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058ec7c);
}


