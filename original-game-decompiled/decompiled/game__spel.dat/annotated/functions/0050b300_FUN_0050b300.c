
/* ==== FUN_0050b300 @ 0050b300 ==== 
 * signature: int * __stdcall FUN_0050b300(int * param_1, int * param_2)
 * body: 0050b300-0050b34f
 */

int * FUN_0050b300(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  int *piVar5;
  
  do {
    piVar5 = param_1;
    iVar1 = piVar5[3];
    iVar2 = param_2[3];
    iVar4 = 0;
    while( true ) {
      if ((int)(uint)*(ushort *)((int)piVar5 + 0x1a) <= iVar4) {
        return piVar5;
      }
      param_1 = *(int **)(piVar5[7] + iVar4 * 4);
      bVar3 = FUN_0050af20(param_1,param_2,((char)iVar1 - (char)iVar2) - 1);
      if (CONCAT31(extraout_var,bVar3) == 1) break;
      iVar4 = iVar4 + 1;
    }
  } while( true );
}


