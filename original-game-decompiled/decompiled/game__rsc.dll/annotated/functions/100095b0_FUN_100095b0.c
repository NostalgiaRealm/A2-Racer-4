
/* ==== FUN_100095b0 @ 100095b0 ==== 
 * signature: int * __cdecl FUN_100095b0(int * param_1, void * param_2)
 * body: 100095b0-10009799
 */

int * __cdecl FUN_100095b0(int *param_1,void *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  void *local_18;
  void *local_14;
  int *local_c;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_10009400(param_2);
  }
  else if (param_2 == (void *)0x0) {
    FUN_100097a0(param_1,param_1);
    piVar1 = (int *)0x0;
  }
  else {
    do {
      local_c = (int *)0x0;
      if (param_2 < (void *)0xffffffe1) {
        FUN_100073f0(9);
        puVar2 = (uint *)FUN_10009930((int)param_1);
        if (puVar2 == (uint *)0x0) {
          FUN_10007490(9);
          if (param_2 == (void *)0x0) {
            param_2 = (void *)0x1;
          }
          param_2 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
          local_c = HeapReAlloc(DAT_10031a8c,0,param_1,(SIZE_T)param_2);
        }
        else {
          if (param_2 <= DAT_10030004) {
            iVar3 = FUN_1000a800(puVar2,(int)param_1,(int)param_2);
            if (iVar3 == 0) {
              local_c = FUN_10009fc0((int)param_2);
              if (local_c != (int *)0x0) {
                local_14 = (void *)(param_1[-1] - 1);
                if (param_2 <= local_14) {
                  local_14 = param_2;
                }
                FUN_100061d0(local_c,param_1,(uint)local_14);
                FUN_100099f0(puVar2,(int)param_1);
              }
            }
            else {
              local_c = param_1;
            }
          }
          if (local_c == (int *)0x0) {
            if (param_2 == (void *)0x0) {
              param_2 = (void *)0x1;
            }
            param_2 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
            local_c = HeapAlloc(DAT_10031a8c,0,(SIZE_T)param_2);
            if (local_c != (int *)0x0) {
              local_18 = param_2;
              if ((void *)(param_1[-1] - 1U) < param_2) {
                local_18 = (void *)(param_1[-1] - 1U);
              }
              FUN_100061d0(local_c,param_1,(uint)local_18);
              FUN_100099f0(puVar2,(int)param_1);
            }
          }
          FUN_10007490(9);
        }
      }
      if (local_c != (int *)0x0) {
        return local_c;
      }
      if (DAT_1003161c == 0) {
        return (int *)0x0;
      }
      iVar3 = __callnewh((size_t)param_2);
    } while (iVar3 != 0);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


