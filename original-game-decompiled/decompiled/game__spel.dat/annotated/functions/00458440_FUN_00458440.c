
/* ==== FUN_00458440 @ 00458440 ==== 
 * signature: undefined __stdcall FUN_00458440(void)
 * body: 00458440-00458598
 */

void FUN_00458440(void)

{
  FILE *pFVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iStack_378;
  uint uStack_374;
  int iStack_370;
  undefined4 local_36c [4];
  int iStack_35c;
  char cStack_314;
  undefined1 auStack_313 [787];
  
  if (DAT_006fb8d0 == 0) {
    pFVar1 = (FILE *)FUN_005589a5(s_PICTURE_PCX_005a41ec,&DAT_005a41e8);
    local_36c[0] = 0x6c;
    (**(code **)(**(int **)(DAT_0073b1b0 + 4) + 100))(*(int **)(DAT_0073b1b0 + 4),0,local_36c);
    FUN_00558c1d(&stack0xfffffc00,0x80,1,(int *)pFVar1);
    FUN_004cbbf0((int *)pFVar1,iStack_35c,uStack_374,iStack_378,iStack_370);
    puVar3 = auStack_313;
    iVar4 = 0x100;
    puVar2 = (undefined1 *)(DAT_007409f0 + 2);
    do {
      puVar3[-1] = puVar2[-2];
      *puVar3 = puVar2[-1];
      puVar3[1] = *puVar2;
      puVar3 = puVar3 + 3;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 4;
    } while (iVar4 != 0);
    FUN_00558c1d(&stack0xfffffbff,1,1,(int *)pFVar1);
    FUN_00558c1d(&cStack_314,1,0x300,(int *)pFVar1);
    FUN_005588fd(pFVar1);
    (**(code **)(**(int **)(DAT_0073b1b0 + 4) + 0x80))(*(int **)(DAT_0073b1b0 + 4),0);
  }
  return;
}


