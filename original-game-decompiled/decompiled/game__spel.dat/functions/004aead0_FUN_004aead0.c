
/* ==== FUN_004aead0 @ 004aead0 ==== 
 * signature: undefined __thiscall FUN_004aead0(void * this, LPCSTR param_1)
 * body: 004aead0-004aeb00;004aeb04-004aec4e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004aeb01-004aeb03
 */

void __thiscall FUN_004aead0(void *this,LPCSTR param_1)

{
  LPCSTR pCVar1;
  FILE *pFVar2;
  int iVar3;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  byte abStack_20 [32];
  
  pCVar1 = param_1;
  pFVar2 = (FILE *)FUN_004c62c0(param_1);
  if (pFVar2 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____File_open_failed_for_fi_005b00b4);
  }
  FUN_00558b35((char *)&param_1,4,1,(int *)pFVar2);
  iVar3 = 0;
  if (0 < (int)param_1) {
    do {
      FUN_00558b35((char *)&uStack_44,4,1,(int *)pFVar2);
      FUN_00558b35((char *)&iStack_3c,4,1,(int *)pFVar2);
      FUN_00558b35((char *)&uStack_38,4,1,(int *)pFVar2);
      FUN_00558b35((char *)&uStack_34,4,1,(int *)pFVar2);
      FUN_00558b35((char *)&uStack_30,4,1,(int *)pFVar2);
      FUN_00558b35((char *)&fStack_2c,4,1,(int *)pFVar2);
      FUN_00558b35((char *)&fStack_28,4,1,(int *)pFVar2);
      FUN_00558b35((char *)&fStack_24,4,1,(int *)pFVar2);
      FUN_00558b35((char *)abStack_20,1,0x20,(int *)pFVar2);
      FUN_00558b35((char *)&iStack_40,4,1,(int *)pFVar2);
      FUN_004536e0(iStack_3c,abStack_20,pCVar1,fStack_2c,fStack_28,fStack_24,uStack_38,uStack_34,
                   uStack_30,iStack_40,uStack_44,*(int *)((int)this + 0x9c));
      FUN_004c3fa0((byte *)s_Currently_loaded_objects___d_of___005b068c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1);
  }
  FUN_004c6430(pFVar2);
  return;
}


