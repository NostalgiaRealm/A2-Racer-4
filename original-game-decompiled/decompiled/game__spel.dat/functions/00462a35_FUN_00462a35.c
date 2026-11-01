
/* ==== FUN_00462a35 @ 00462a35 ==== 
 * signature: undefined4 __stdcall FUN_00462a35(int * param_1, int param_2)
 * body: 00462a35-00462a3f
 */

undefined4 FUN_00462a35(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = param_1[0xb];
    if (0 < iVar2) {
      param_1[5] = param_1[2];
      param_1[6] = param_1[3];
      param_1[2] = (int)((float)param_1[2] + (float)param_1[8]);
      param_1[7] = param_1[4];
      param_1[3] = (int)((float)param_1[3] + (float)param_1[9]);
      param_1[4] = (int)((float)param_1[4] + (float)param_1[10]);
      param_1[8] = (int)(*(float *)(param_2 + 0xc4) + (float)param_1[8]);
      param_1[9] = (int)(*(float *)(param_2 + 200) + (float)param_1[9]);
      fVar1 = *(float *)(param_2 + 0xcc);
      param_1[0xb] = iVar2 + -1;
      param_1[0xf] = param_1[0xc];
      param_1[0x10] = param_1[0xd];
      param_1[10] = (int)(fVar1 + (float)param_1[10]);
      param_1[0x11] = param_1[0xe];
      param_1[0xc] = (int)((float)param_1[0x12] + (float)param_1[0xc]);
      param_1[0xd] = (int)((float)param_1[0x13] + (float)param_1[0xd]);
      param_1[0xe] = (int)((float)param_1[0x14] + (float)param_1[0xe]);
      return 1;
    }
    if (iVar2 == 0) {
      if (*param_1 == 0) {
        *(int *)(param_2 + 0x78) = param_1[1];
      }
      else {
        *(int *)(*param_1 + 4) = param_1[1];
      }
      if ((int *)param_1[1] != (int *)0x0) {
        *(int *)param_1[1] = *param_1;
      }
      param_1[1] = (int)DAT_00709af8;
      DAT_00709af8 = param_1;
      *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;
    }
  }
  return 0;
}


