
/* ==== FUN_0042ec50 @ 0042ec50 ==== 
 * signature: undefined __thiscall FUN_0042ec50(void * this, LPCSTR param_1)
 * body: 0042ec50-0042ed74
 */

void __thiscall FUN_0042ec50(void *this,LPCSTR param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int local_124;
  undefined4 local_120 [4];
  CHAR local_110 [16];
  byte local_100 [128];
  char local_80 [128];
  
  FUN_004c3d10(param_1,s_Cylinders_00597980,(LPSTR)local_100,0x7f);
  iVar5 = -1;
  pbVar6 = local_100;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  if (iVar5 != -2) {
    iVar5 = FUN_004c3d60(local_100,(uint *)0x0);
    iVar7 = 0;
    if (0 < iVar5) {
      do {
        FUN_004c3f10(iVar7,local_80,0x7f);
        local_124 = FUN_0049ecb0(&DAT_006fbb5c,local_80);
        iVar2 = FUN_0049eb50(&DAT_006fbb5c,local_124);
        pcVar3 = *(char **)(iVar2 + 0x1c);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "";
        }
        uVar4 = FUN_004c7c50(pcVar3,0);
        *(uint *)(iVar2 + 0x38) = uVar4;
        FUN_004a5620(*(void **)((int)this + 0x4c),
                     *(undefined4 **)((int)*(void **)((int)this + 0x4c) + 8),1,&local_124);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
      if ((0 < iVar5) && (iVar5 = 0, 0 < *(int *)this)) {
        do {
          wsprintfA(local_110,&DAT_00597990,&PTR_DAT_0059798c,iVar5);
          FUN_0042e890(param_1,local_110,local_120);
          FUN_0042f660(*(void **)((int)this + 0x54),
                       *(undefined4 **)((int)*(void **)((int)this + 0x54) + 8),1,local_120);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)this);
      }
    }
  }
  return;
}


