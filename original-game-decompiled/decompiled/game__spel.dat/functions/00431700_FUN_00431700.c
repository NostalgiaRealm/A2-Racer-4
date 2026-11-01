
/* ==== FUN_00431700 @ 00431700 ==== 
 * signature: undefined __cdecl FUN_00431700(float param_1)
 * body: 00431700-00431743;00431747-0043180f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00431744-00431746
 */

void __cdecl FUN_00431700(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_c [3];
  
  fVar3 = param_1;
  local_c[0] = 0.0;
  local_c[1] = 0.0;
  local_c[2] = 0.0;
  iVar4 = FUN_004316d0((int)param_1);
  if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_The_given_object__d_is_not_00597db0);
  }
  iVar4 = (int)param_1 * 0xf0;
  fVar1 = *(float *)(iVar4 + 0xbc + DAT_00715e50);
  fVar2 = *(float *)(iVar4 + 0xc4 + DAT_00715e50);
  if (100.0 < fVar1 * fVar1 + fVar2 * fVar2) {
    if (0.1 <= ABS(fVar2)) {
      fVar5 = (float10)fpatan((float10)fVar1 / (float10)fVar2,(float10)1);
      param_1 = (float)-fVar5;
    }
    else {
      param_1 = 0.0;
    }
    FUN_00428170(local_c,(int)fVar3,param_1,0,0.0,'\0');
    FUN_004a97f0(DAT_00715e50 + iVar4);
  }
  return;
}


