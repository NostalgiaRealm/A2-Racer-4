
/* ==== FUN_00530190 @ 00530190 ==== 
 * signature: undefined __cdecl FUN_00530190(int * param_1, int param_2, int param_3, int param_4)
 * body: 00530190-00530288
 */

void __cdecl FUN_00530190(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  param_4 = FUN_0052db00(param_2,param_3,param_4);
  FUN_0051a750();
  if (param_4 != 0) {
    piVar6 = (int *)(param_4 + 4);
    iVar1 = *(int *)(param_4 + 4);
    while (iVar1 != 0) {
      piVar6 = piVar6 + 1;
      iVar4 = *(int *)(iVar1 + 0xc);
      bVar3 = false;
      bVar2 = false;
      if (iVar4 == 0) {
LAB_00530215:
        *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xfeffffff;
      }
      else {
        piVar5 = (int *)(iVar4 + 4);
        iVar4 = *(int *)(iVar4 + 4);
        if (iVar4 == 0) goto LAB_00530215;
        do {
          piVar5 = piVar5 + 1;
          if ((*(byte *)(iVar4 + 0x52) & 1) == 0) {
            bVar3 = true;
          }
          else {
            bVar2 = true;
          }
          iVar4 = *piVar5;
        } while (iVar4 != 0);
        if ((!bVar2) || (!bVar3)) goto LAB_00530215;
        *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 0x1000000;
      }
      iVar1 = *piVar6;
    }
  }
  FUN_00558953(param_1,&DAT_005c3290);
  if (param_4 != 0) {
    piVar6 = (int *)(param_4 + 4);
    iVar1 = *(int *)(param_4 + 4);
    while (iVar1 != 0) {
      piVar6 = piVar6 + 1;
      if ((*(uint *)(iVar1 + 0x14) & 0x1000000) != 0) {
        FUN_005164c0(*(uint *)(iVar1 + 8));
        FUN_00558953(param_1,&DAT_005c3290);
      }
      iVar1 = *piVar6;
    }
  }
  FUN_00514ba0(&param_4);
  return;
}


