
/* ==== FUN_00471c90 @ 00471c90 ==== 
 * signature: undefined __fastcall FUN_00471c90(int param_1)
 * body: 00471c90-00471d0c
 */

void __fastcall FUN_00471c90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))();
  iVar3 = 0x32;
  iVar4 = iVar1;
  do {
    iVar4 = iVar4 + -1;
    if ((iVar4 < 0) || (iVar1 <= iVar4)) break;
    iVar2 = iVar4;
    if (0 < iVar4) {
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004c5930(1,10,iVar3,(byte *)s_COM_>_s_005a8d0c);
    iVar3 = iVar3 + -0x10;
  } while (2 < iVar3);
  FUN_004c5930(1,10,0x46,(byte *)s_COM_>_s_005a8d14);
  return;
}


