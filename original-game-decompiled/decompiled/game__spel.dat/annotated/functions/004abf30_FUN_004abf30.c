
/* ==== FUN_004abf30 @ 004abf30 ==== 
 * signature: undefined __cdecl FUN_004abf30(void * param_1, int * param_2, int * param_3)
 * body: 004abf30-004ac01a
 */

void __cdecl FUN_004abf30(void *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int *local_54;
  float local_50 [8];
  float local_30 [12];
  
  local_54 = param_3;
  if (0 < (int)param_3) {
    param_3 = param_2;
    do {
      pfVar1 = local_30 + 1;
      param_2 = (int *)0x4;
      iVar3 = *param_3 * 0x8c;
      pfVar4 = (float *)(iVar3 + DAT_0073b040);
      do {
        pfVar5 = pfVar4;
        pfVar6 = local_50;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar6 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar6 = pfVar6 + 1;
        }
        pfVar1[-1] = local_50[0];
        *pfVar1 = local_50[1];
        pfVar1[1] = local_50[2];
        pfVar1 = pfVar1 + 3;
        param_2 = (int *)((int)param_2 + -1);
        pfVar4 = pfVar4 + 8;
      } while (param_2 != (int *)0x0);
      iVar2 = 2;
      do {
        FUN_004a1180(param_1,local_30 + *(short *)(iVar3 + 0x80 + DAT_0073b040) * 3,
                     local_30 + *(short *)(iVar3 + 0x82 + DAT_0073b040) * 3,
                     local_30 + *(short *)(iVar3 + 0x84 + DAT_0073b040) * 3);
        iVar3 = iVar3 + 6;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      param_3 = param_3 + 1;
      local_54 = (int *)((int)local_54 + -1);
    } while (local_54 != (int *)0x0);
  }
  return;
}


