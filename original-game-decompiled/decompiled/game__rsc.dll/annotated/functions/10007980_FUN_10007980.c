
/* ==== FUN_10007980 @ 10007980 ==== 
 * signature: undefined __stdcall FUN_10007980(void)
 * body: 10007980-10007ac8
 */

void FUN_10007980(void)

{
  size_t sVar1;
  int iVar2;
  int *local_10;
  int local_c;
  uint *local_8;
  
  if (DAT_10031aa8 == 0) {
    FUN_1000cb60();
  }
  local_c = 0;
  for (local_8 = DAT_1003141c; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    if ((char)*local_8 != '=') {
      local_c = local_c + 1;
    }
    sVar1 = _strlen((char *)local_8);
  }
  local_10 = (int *)FUN_10003710((void *)(local_c * 4 + 4),2,0x1002cb84,0x6d);
  DAT_100314c8 = local_10;
  if (local_10 == (int *)0x0) {
    __amsg_exit(9);
  }
  for (local_8 = DAT_1003141c; (char)*local_8 != '\0';
      local_8 = (uint *)((int)local_8 + (int)(sVar1 + 1))) {
    sVar1 = _strlen((char *)local_8);
    if ((char)*local_8 != '=') {
      iVar2 = FUN_10003710((void *)(sVar1 + 1),2,0x1002cb84,0x79);
      *local_10 = iVar2;
      if (*local_10 == 0) {
        __amsg_exit(9);
      }
      FUN_10001ec0((uint *)*local_10,local_8);
      local_10 = local_10 + 1;
    }
  }
  FUN_100041a0(DAT_1003141c,2);
  DAT_1003141c = (uint *)0x0;
  *local_10 = 0;
  DAT_10031a98 = 1;
  return;
}


