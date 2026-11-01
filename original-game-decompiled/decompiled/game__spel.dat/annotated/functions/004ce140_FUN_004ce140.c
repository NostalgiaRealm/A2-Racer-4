
/* ==== FUN_004ce140 @ 004ce140 ==== 
 * signature: undefined __cdecl FUN_004ce140(undefined4 param_1, LPCSTR param_2)
 * body: 004ce140-004ce171;004ce175-004ce353
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ce172-004ce174
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004ce140(undefined4 param_1,LPCSTR param_2)

{
  ushort uVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  char cStack_12;
  char cStack_11;
  int iStack_10;
  int iStack_c;
  ushort *puStack_8;
  int iStack_4;
  
  pFVar2 = (FILE *)FUN_005589a5(param_2,&DAT_005b5ea4);
  if (pFVar2 != (FILE *)0x0) {
    _DAT_007413fa = (DAT_005b379c * DAT_005b3798 + 0x12) * 3;
    _DAT_007413f8 = 0x4d42;
    _DAT_007413fe = 0;
    _DAT_00741400 = 0;
    _DAT_00741402 = 0x36;
    _DAT_00741408 = 0x28;
    _DAT_0074140c = DAT_005b3798;
    _DAT_00741410 = DAT_005b379c;
    _DAT_00741414 = 1;
    _DAT_00741416 = 0x18;
    _DAT_00741418 = 0;
    _DAT_0074141c = 0;
    _DAT_00741420 = 0;
    _DAT_00741424 = 0;
    _DAT_00741428 = 0;
    _DAT_0074142c = 0;
    FUN_00558c1d(&DAT_007413f8,1,0xe,(int *)pFVar2);
    FUN_00558c1d(&DAT_00741408,1,0x28,(int *)pFVar2);
    FUN_004c8540();
    iVar3 = FUN_004c48f0(DAT_007408ac);
    iStack_4 = 0;
    puStack_8 = (ushort *)(iVar3 + (DAT_005b379c + -1) * iStack_c);
    iVar3 = DAT_005b3798;
    iVar4 = DAT_005b379c;
    if (0 < DAT_005b379c) {
      do {
        iStack_10 = 0;
        puVar5 = puStack_8;
        if (0 < iVar3) {
          do {
            uVar1 = *puVar5;
            cStack_11 = (char)((int)(uVar1 & DAT_0074099c) >>
                              ((char)DAT_00740990 + (byte)DAT_00740994 & 0x1f)) <<
                        ((byte)_DAT_007409ac & 0x1f);
            cStack_12 = (char)((int)(uVar1 & DAT_007409a0) >> ((byte)DAT_00740994 & 0x1f)) <<
                        ((byte)_DAT_007409b0 & 0x1f);
            param_2 = (LPCSTR)CONCAT31(param_2._1_3_,
                                       ((byte)DAT_007409a4 & (byte)uVar1) <<
                                       ((byte)_DAT_007409b4 & 0x1f));
            FUN_00558c1d((char *)&param_2,1,1,(int *)pFVar2);
            FUN_00558c1d(&cStack_12,1,1,(int *)pFVar2);
            FUN_00558c1d(&cStack_11,1,1,(int *)pFVar2);
            puVar5 = puVar5 + 1;
            iStack_10 = iStack_10 + 1;
            iVar3 = DAT_005b3798;
            iVar4 = DAT_005b379c;
          } while (iStack_10 < DAT_005b3798);
        }
        puStack_8 = (ushort *)((int)puStack_8 - iStack_c);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < iVar4);
    }
    FUN_004c4a20(DAT_007408ac,puStack_8);
    FUN_005588fd(pFVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d_____save_bmp__can_t_create_005b6a3c);
}


