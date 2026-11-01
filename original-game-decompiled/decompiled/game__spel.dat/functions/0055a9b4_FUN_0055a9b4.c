
/* ==== FUN_0055a9b4 @ 0055a9b4 ==== 
 * signature: int * __cdecl FUN_0055a9b4(int * param_1, uint * param_2)
 * body: 0055a9b4-0055aad3
 */

int * __cdecl FUN_0055a9b4(int *param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_1 == (int *)0x0) {
    piVar1 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      FUN_00559d4e(param_1);
    }
    else {
      do {
        if (param_2 < (uint *)0xffffffe1) {
          puVar2 = (uint *)FUN_0056205a((int)param_1);
          if (puVar2 == (uint *)0x0) {
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x1;
            }
            param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
            piVar1 = HeapReAlloc(DAT_0075008c,0,param_1,(SIZE_T)param_2);
          }
          else {
            if (param_2 <= DAT_005c8bd4) {
              iVar3 = FUN_00562865(puVar2,(int)param_1,(int)param_2);
              piVar1 = param_1;
              if (iVar3 == 0) {
                piVar1 = FUN_005623b0(param_2);
                if (piVar1 == (int *)0x0) goto LAB_0055aa4d;
                puVar4 = (uint *)(param_1[-1] - 1U);
                if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                  puVar4 = param_2;
                }
                FUN_0055b3c0(piVar1,param_1,(uint)puVar4);
                FUN_00562085(puVar2,(uint)param_1);
              }
              if (piVar1 != (int *)0x0) {
                return piVar1;
              }
            }
LAB_0055aa4d:
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x1;
            }
            param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
            piVar1 = HeapAlloc(DAT_0075008c,0,(SIZE_T)param_2);
            if (piVar1 == (int *)0x0) goto LAB_0055aab0;
            puVar4 = (uint *)(param_1[-1] - 1U);
            if (param_2 <= (uint *)(param_1[-1] - 1U)) {
              puVar4 = param_2;
            }
            FUN_0055b3c0(piVar1,param_1,(uint)puVar4);
            FUN_00562085(puVar2,(uint)param_1);
          }
          if (piVar1 != (int *)0x0) {
            return piVar1;
          }
        }
LAB_0055aab0:
        if (DAT_0074de78 == 0) {
          return (int *)0x0;
        }
        iVar3 = FUN_00562b5b(param_2);
      } while (iVar3 != 0);
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


