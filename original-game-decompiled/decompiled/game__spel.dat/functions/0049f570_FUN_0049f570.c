
/* ==== FUN_0049f570 @ 0049f570 ==== 
 * signature: undefined __fastcall FUN_0049f570(int param_1)
 * body: 0049f570-0049f6dc
 */

void __fastcall FUN_0049f570(int param_1)

{
  int iVar1;
  
  FUN_004c3fa0((byte *)s__________________________________005aed3c);
  FUN_004c3fa0((byte *)s_____Dump_of_object_CSndEngine____005aed18);
  FUN_004c3fa0((byte *)s__________________________________005aed3c);
  FUN_004c3fa0((byte *)s_Master_volume___d_005aed04);
  FUN_004c3fa0((byte *)s_Listener_position___f___f___f_005aece4);
  FUN_004c3fa0((byte *)s_Listener_velocity___f___f___f_005aecc4);
  FUN_004c3fa0((byte *)s_Number_of_sample_groups_read___d_005aeca0);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x220)) {
    do {
      FUN_004c3fa0((byte *)s_Group__d____s_005aec90);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x220));
  }
  FUN_004c3fa0((byte *)s_Number_of_sound_types___d_005aec74);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      FUN_0049ef20((void *)(param_1 + 0x14),iVar1);
      FUN_0049f2d0();
      FUN_004c3fa0((byte *)s_______________________Type__2d___005aec3c);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  FUN_004c3fa0((byte *)s__________________________________005aec04);
  FUN_004c3fa0((byte *)s_Number_of_sound_sources___d_005aebe4);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_004c3fa0((byte *)s_______________________Source__2d_005aebac);
      FUN_0049eb50((void *)(param_1 + 4),iVar1);
      FUN_0049e0c0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return;
}


