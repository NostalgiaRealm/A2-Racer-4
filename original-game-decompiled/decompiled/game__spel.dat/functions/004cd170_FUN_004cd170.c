
/* ==== FUN_004cd170 @ 004cd170 ==== 
 * signature: int __cdecl FUN_004cd170(undefined4 param_1)
 * body: 004cd170-004cd26f
 */

int __cdecl FUN_004cd170(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    if (DAT_005b60bc != -1) {
      FUN_004c3fa0((byte *)s_using_3dfx_driver__d_005b64a4);
      return DAT_00740db0 + DAT_005b60bc * 0xd8;
    }
    if (DAT_005b60b8 != -1) {
      FUN_004c3fa0((byte *)s_using_unknown_secondary_driver___005b6480);
      return DAT_00740db0 + DAT_005b60b8 * 0xd8;
    }
    break;
  case 2:
    if (DAT_005b60b8 != -1) {
      FUN_004c3fa0((byte *)s_using_unknown_secondary_driver___005b6480);
      return DAT_00740db0 + DAT_005b60b8 * 0xd8;
    }
    break;
  case 3:
    if (DAT_005b60bc != -1) {
      FUN_004c3fa0((byte *)s_using_3dfx_driver__d_005b64a4);
      return DAT_00740db0 + DAT_005b60bc * 0xd8;
    }
    break;
  case 4:
    if (DAT_005b60c0 != -1) {
      FUN_004c3fa0((byte *)s_using_user_defined_driver__d_005b6460);
      return DAT_00740db0 + DAT_005b60c0 * 0xd8;
    }
  }
  return 0;
}


