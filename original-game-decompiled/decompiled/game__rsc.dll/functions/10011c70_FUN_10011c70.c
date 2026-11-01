
/* ==== FUN_10011c70 @ 10011c70 ==== 
 * signature: undefined1 * __stdcall FUN_10011c70(void)
 * body: 10011c70-10011d92
 */

undefined1 * FUN_10011c70(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *_Str;
  undefined1 *puVar6;
  undefined1 *local_18;
  uint local_14;
  int local_c;
  
  puVar1 = PTR_PTR_10030ca8;
  local_c = 0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x38));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x68));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = (undefined1 *)FUN_100036f0((void *)(local_c + 1));
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_10001ec0((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_10001ec0(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}


