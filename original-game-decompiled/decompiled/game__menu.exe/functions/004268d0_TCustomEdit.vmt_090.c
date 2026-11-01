
/* ==== TCustomEdit.vmt_090 @ 004268d0 ==== 
 * signature: undefined __register TCustomEdit.vmt_090(int * param_1, int * param_2)
 * body: 004268d0-00426983
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomEdit_vmt_090(int *param_1,int *param_2)

{
  TWinControl_vmt_090(param_1,param_2);
  FUN_00431844(param_1,(int)param_2,(LPCSTR)FUN_00426984);
  param_2[1] = param_2[1] | 0xc0U | *(uint *)(&DAT_004aa630 + (uint)*(byte *)(param_1 + 0x7d) * 4) |
               *(uint *)(&DAT_004aa648 + (uint)(*(char *)((int)param_1 + 0x1f5) != '\0') * 4) |
               *(uint *)(&DAT_004aa650 + (uint)*(byte *)((int)param_1 + 0x1f6) * 4) |
               *(uint *)(&DAT_004aa658 + (uint)*(byte *)((int)param_1 + 0x1fb) * 4) |
               *(uint *)(&DAT_004aa664 + (uint)*(byte *)((int)param_1 + 0x1f9) * 4) |
               *(uint *)(&DAT_004aa66c + (uint)*(byte *)((int)param_1 + 0x1fa) * 4);
  if (((*PTR_DAT_004ab7d4 != '\0') && ((char)param_1[0x4e] != '\0')) &&
     ((char)param_1[0x7d] == '\x01')) {
    param_2[1] = param_2[1] & 0xff7fffff;
    param_2[2] = param_2[2] | 0x200;
  }
  return;
}


