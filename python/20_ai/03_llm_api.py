import os
from openai import OpenAI



client = OpenAI(api_key=os.getenv("OPENAI_API_KEY"))

try:
    response = client.responses.create(
        model="gpt-5",
        input="Complete this chat: Jack: Hey; Jill: How are you?; Jack: now what?; Jill:",
        temperature=1,
        max_output_tokens=200
    )

    print(response.output_text)

except Exception as e:
    print("Error:", e)