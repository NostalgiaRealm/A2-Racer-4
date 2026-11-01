
/* ==== FUN_00497d40 @ 00497d40 ==== 
 * signature: int __fastcall FUN_00497d40(int * param_1)
 * body: 00497d40-00497db4
 */

int __fastcall FUN_00497d40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  FUN_004c3fa0((byte *)s_Now_get_the_total_of_multisize_t_005adf44);
  iVar2 = 0;
  if (0 < *param_1) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + param_1[5]) == -1) {
        iVar1 = iVar2;
        if (0 < iVar4) {
          do {
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        FUN_004c3fa0((byte *)s_Multisize_texture___s_005adf90);
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < *param_1);
  }
  FUN_004c3fa0((byte *)s_Found__d_multi_size_textures_005adfa8);
  return iVar3;
}


