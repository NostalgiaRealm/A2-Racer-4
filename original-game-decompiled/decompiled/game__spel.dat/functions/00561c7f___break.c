
/* ==== __break @ 00561c7f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00561c7f-00561c7f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


