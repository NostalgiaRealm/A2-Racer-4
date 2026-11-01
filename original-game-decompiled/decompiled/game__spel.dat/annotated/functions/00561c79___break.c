
/* ==== __break @ 00561c79 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00561c79-00561c79
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


